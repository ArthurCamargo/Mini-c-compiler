#include "symbol_table.h"

symbol create_symbol(int size_mult, type t, nature n, unsigned int line, value v, char * lexeme)
{
    //For the hash table we calculate it's hash here, only once
    symbol s;
    s.location = line;
    s.nat = n;
    s.t_type = t;
    set_symbol_size(&s, size_mult);
    s.literal_value = v;
    s.lexeme = strdup(lexeme);
    return s;
}

void set_symbol_type(symbol *s, type t)
{
    s->t_type = t;
}

void set_symbol_size(symbol *s, int size_mult)
{
    switch(s->t_type)
    {
        case TYPE_UNKNOWN:
            break;
        case TYPE_UINT:
            s->size = 32 * size_mult;
            break;
        case TYPE_INT:
            s->size = 32 * size_mult;
            break;
        case TYPE_BOOL:
            s->size = 8 * size_mult;
            break;
        case TYPE_FLOAT:
            s->size = 64 * size_mult;
            break;
        case TYPE_CHAR:
            s->size = 8 * size_mult;
            break;
        case TYPE_STRING:
            s->size = 1 * size_mult;
            break;
    }
}

symbol_table* create_table()
{
    symbol_table* table = malloc(sizeof(symbol_table));
    table->count = 0;
    table->capacity = 1024;
    table->buckets =  calloc(table->capacity, sizeof(bucket));

    return table;
}

void destroy_table(symbol_table* table)
{
}

unsigned int hash_string(char *str, int size, int capacity)
{
    //FNV-1 Hash function
    //http://www.isthe.com/chongo/tech/comp/fnv/
    unsigned int hash = 2166136261u;

    for(int i = 0; i < size; i ++)
    {
        hash ^= (int8_t)str[i];
        hash *= 16777619;
    }
    printf("Here is your hash %u, and size %d \n", hash, size);

    return hash % capacity;
}

bucket* find_symbol_in_table(bucket * buckets, int capacity, key_object* key)
{
    unsigned int index = key->hash_value % capacity;
    while(1){
        bucket* bucket = &buckets[index];
        if(bucket->key == key || bucket->key == NULL)
        {
            return bucket;
        }

        index = (index + 1) % capacity;
    }
}

static void allocate_capacity(symbol_table* table, uint new_capacity)
{
    bucket* buckets = ALLOCATE(bucket, new_capacity);
    for (int i = 0; i < new_capacity; i ++) {
        buckets[i].key = NULL;
        buckets[i].data = NULL;
    }

    table->count = 0;

    for(int i = 0; i < table->capacity; i++)
    {
        bucket* current_bucket = &table->buckets[i];
        if(current_bucket->key == NULL) continue;

        bucket* dest = find_symbol_in_table(buckets, new_capacity, current_bucket->key);
        //We need to recalculate the hash keys to resize the table
        dest->key = current_bucket->key;
        dest->data = current_bucket->data;

        table->count ++;
    }

    FREE_ARRAY(bucket, table->buckets, table->count);

    table->buckets = buckets;
    table->capacity = new_capacity;
}


void transferTable(symbol_table* from, symbol_table* to)
{
    for (int i = 0; i < from->capacity; i++) {
        bucket* bucket = &from->buckets[i];
        if(bucket->key != NULL)
        {
            insert_symbol(to,(*bucket->data));
        }
    }
}



bool insert_symbol(symbol_table* table, symbol s)
{
    if(table->count + 1 > table->capacity * 0.5) {
        //If the table is half full we double it's size for trying to avoid collitions
        int new_capacity = GROW_CAPACITY(table->capacity);
        allocate_capacity(table, new_capacity);
    }

    key_object key;
    key.key_string = s.lexeme;
    key.size = strlen(s.lexeme);
    key.hash_value = hash_string(s.lexeme, strlen(s.lexeme), table->capacity);
    printf("Inserting '%s' with key %u \n", s.lexeme, key.hash_value);

    bucket* actual_bucket = find_symbol_in_table(table->buckets, table->capacity, &key);
    bool is_new_key;
    is_new_key = !actual_bucket;

    if (is_new_key)
        table->count ++;

    actual_bucket->key = &key;
    actual_bucket->data = &s;

    return is_new_key;
}



/*
uint verify_symbol(symbol_table *table, char *string)
{
    uint key = hash(string);

    while(table->data[key].location != -1 && strcmp(table->data[key].value.lexeme, string))
    {
        key ++;
        key = key % MAX_SIZE;
    }
    if(table->data[key].location == -1)
        return 0;
    else
    {
        return key;
    }
}

symbol get_symbol(symbol_table *table, char *string)
{
    uint key;
    if((key = verify_symbol(table, string)))
       return table->data[key];

    return table->data[0];
}

*/
