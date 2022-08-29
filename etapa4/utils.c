#include "utils.h"



void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }
    if (pointer == NULL)
    {
        void* result = malloc(sizeof(newSize));
        return result;
    }
    else
    {
        void* result = realloc(pointer, newSize);
        return result;
    /*
     * Ok, afters some research, found taht when the pointer is null, realloc
     * behaves as malloc(newSize) which is pretty cool!
     */
    }
}
