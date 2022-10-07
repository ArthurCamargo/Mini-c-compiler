#include "code.h"

//List operations

list create_code_list(code_line* c)
{
    list l;
    l.count = 1;

    l.data = *c;
    l.next = NULL;

    return l;
}

list initialize_code_list()
{
    list l;
    l.count = 0;
    l.data.size = 0;
    l.next = NULL;

    return l;
}

code_line create_code_line(int first, int second, int result, opcode op)
{
    code_line c;

    c.size = 0;

    c.op = op;
    c.first_register = first;
    c.second_register = second;
    c.result = result;

    return c;
}

code_line create_normal_code_line(opcode op)
{
    //r1, r2 => r3
    return create_code_line(create_register(), create_register(), create_register(), op);
}

code_line create_immediate_code_line(int immediate, opcode op)
{
    //r0, c1 => r1 or r1 => r2, c3 (2 regs, 1 c)
    return create_code_line(create_register(), immediate, create_register(), op);
}

code_line create_two_register_code_line(opcode op)
{
    //r1 => r2
    return create_code_line(create_register(), 0, create_register(), op);
}

code_line create_immediate_load_code_line(int immediate, opcode op)
{
    // c1 => r1
    return create_code_line(immediate, 0, create_register(), op);
}

code_line create_immediate_jump_code_line(int immediate, opcode op)
{
    // -> l1
    return create_code_line(0, 0, immediate, op);
}

code_line create_one_register_code_line(opcode op)
{
    // -> r1
    return create_code_line(0, 0, create_register(), op);
}

code_line create_conditional_branch_code_line(int label1, int label2, opcode op)
{
    // r1 -> l2, l3
    return create_code_line(create_register(), label1, label2, op); 
}


void insert_code(list* l, code_line cl)
{
    list* pointer = l;
    if(l->data.size == 0)
    {
        l->count ++;
        l->data = cl;
        l->data.size ++;
        l->next = NULL;
    }
    else
    {
        l->count ++;
        list* new_list = (list*) malloc(sizeof(list));

        while(pointer->next != NULL)
        {
            pointer = pointer->next;
        }

        pointer->next = new_list;
        new_list->data.size ++;
        new_list->data = cl;
        new_list->next = NULL;
    }
}

list* concat_list(list* l1, list* l2)
{
    if(l2->data.size == 0)
        return l1;
    else if (l1->data.size == 0)
        return l2;
    //Concat list l1 with list l2
    list* pointer = l1;

    //Find the last element
    while(pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    // Last element of the list 1 point to the list2
    pointer->next = l2;
    l1->count = l1->count + l2->count;

    return l1;
}

int create_label()
{
    static int number = 0;
    number ++;

    return number;
}

int create_register()
{
    static int number = 0;

    number ++;

    return number;
}

void generate_code (list* c)
{
    list* pointer = c;

    for(int i = 0; i < c->count; i ++)
    {
        print_code_line(pointer->data);
        pointer = pointer->next;
    }
}



/*
 	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$2, -8(%rbp)
	movl	$3, -4(%rbp)
	movl	-8(%rbp), %eax
	addl	%eax, -4(%rbp)
	movl	$0, %eax
	popq	%rbp
	ret
.LFE0:
*/

void print_assembly_line(code_line cl)
{
    switch(cl.op)
    {
        case NOP:
            printf("nop\n");
            break;
        case LABEL:
            printf(".LEB%d:\n", cl.first_register);
        case ADD:
            printf("add r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case SUB:
            printf("sub r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case MULT:
            printf("mult r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case DIV:
            printf("div r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case ADDI:
            printf("addI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case SUBI:
            printf("subI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RSUBI:
            printf("rsubI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case MULTI:
            printf("multI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case DIVI:
            printf("divI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RDIVI:
            printf("rdivI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LSHIFT:
            printf("lshift r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LSHIFTI:
            printf("lshiftI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RSHIFT:
            printf("rshift r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RSHIFTI:
            printf("rshiftI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case AND:
            printf("and r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case ANDI:
            printf("andI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case OR:
            printf("or r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case ORI:
            printf("orI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case XOR:
            printf("xor r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case XORI:
            printf("xorI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LOADI:
            printf("loadI %d => r%d\n", cl.first_register, cl.result);
            break;
        case LOAD:
            printf("load r%d => r%d\n", cl.first_register, cl.result);
            break;
        case LOADAI:
            printf("loadAI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LOADAIRFP:
            printf("loadAI rfp, %d => r%d\n", cl.second_register, cl.result);
            break;
        case LOADAIRBSS:
            printf("loadAI rbss, %d => r%d\n", cl.second_register, cl.result);
            break;
        case LOADA0:
            printf("loadA0 r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CLOAD:
            printf("cload r%d => r%d\n", cl.first_register, cl.result);
            break;
        case CLOADAI:
            printf("cloadAI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CLOADA0:
            printf("cloadA0 r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case STORE:
            printf("store r%d => r%d\n", cl.first_register, cl.result);
            break;
        case STOREAI:
            printf("storeAI r%d => r%d, %d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case STOREAIRFP:
            printf("storeAI r%d => rfp, %d\n", cl.first_register, cl.result);
            break;
        case STOREAIRBSS:
            printf("storeAI r%d => rbss, %d\n", cl.first_register, cl.result);
            break;
        case STOREA0:
            printf("storeA0 r%d => r%d, r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CSTORE:
            printf("cstore r%d => r%d\n", cl.first_register, cl.result);
            break;
        case CSTOREAI:
            printf("cstoreAI r%d => r%d, %d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CSTOREA0:
            printf("cstoreA0 r%d => r%d, r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case I2I:
            printf("i2i r%d => r%d\n", cl.first_register, cl.result);
            break;
        case C2C:
            printf("c2c r%d => r%d\n", cl.first_register, cl.result);
            break;
        case C2I:
            printf("c2i r%d => r%d\n", cl.first_register, cl.result);
            break;
        case I2C:
            printf("i2c r%d => r%d\n", cl.first_register, cl.result);
            break;
        case JUMPI:
            printf("jumpI -> l%d\n",  cl.result);
            break;
        case JUMP:
            printf("jump -> r%d\n", cl.result);
            break;
        case CBR:
            printf("cbr r%d -> l%d, l%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_LT:
            printf("cmp_LT r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_LE:
            printf("cmp_LE r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_EQ:
            printf("cmp_EQ r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_GE:
            printf("cmp_GE r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_GT:
            printf("cmp_GT r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_NE:
            printf("cmp_NE r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
    }



}



void print_assembly_header()
{
    printf(".file\t%s\n", __FILE__);
    printf(".text\n");
    printf(".globl main\n");
    printf(".type main, @function\n");

}

void generateAsm(list* c)
{
    list* pointer = c;
    print_assembly_header();
    for(int i = 0; i < c->count; i++)
    {
            print_assembly_line(pointer->data);
            pointer = pointer->next;
    }
}


void print_code_line(code_line cl)
{
    switch(cl.op)
    {
        case NOP:
            printf("nop\n");
            break;
        case LABEL:
            printf("L%d:\n", cl.first_register);
        case ADD:
            printf("add r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case SUB:
            printf("sub r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case MULT:
            printf("mult r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case DIV:
            printf("div r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case ADDI:
            printf("addI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case SUBI:
            printf("subI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RSUBI:
            printf("rsubI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case MULTI:
            printf("multI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case DIVI:
            printf("divI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RDIVI:
            printf("rdivI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LSHIFT:
            printf("lshift r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LSHIFTI:
            printf("lshiftI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RSHIFT:
            printf("rshift r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case RSHIFTI:
            printf("rshiftI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case AND:
            printf("and r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case ANDI:
            printf("andI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case OR:
            printf("or r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case ORI:
            printf("orI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case XOR:
            printf("xor r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case XORI:
            printf("xorI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LOADI:
            printf("loadI %d => r%d\n", cl.first_register, cl.result);
            break;
        case LOAD:
            printf("load r%d => r%d\n", cl.first_register, cl.result);
            break;
        case LOADAI:
            printf("loadAI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case LOADAIRFP:
            printf("loadAI rfp, %d => r%d\n", cl.second_register, cl.result);
            break;
        case LOADAIRBSS:
            printf("loadAI rbss, %d => r%d\n", cl.second_register, cl.result);
            break;
        case LOADA0:
            printf("loadA0 r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CLOAD:
            printf("cload r%d => r%d\n", cl.first_register, cl.result);
            break;
        case CLOADAI:
            printf("cloadAI r%d, %d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CLOADA0:
            printf("cloadA0 r%d, r%d => r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case STORE:
            printf("store r%d => r%d\n", cl.first_register, cl.result);
            break;
        case STOREAI:
            printf("storeAI r%d => r%d, %d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case STOREAIRFP:
            printf("storeAI r%d => rfp, %d\n", cl.first_register, cl.result);
            break;
        case STOREAIRBSS:
            printf("storeAI r%d => rbss, %d\n", cl.first_register, cl.result);
            break;
        case STOREA0:
            printf("storeA0 r%d => r%d, r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CSTORE:
            printf("cstore r%d => r%d\n", cl.first_register, cl.result);
            break;
        case CSTOREAI:
            printf("cstoreAI r%d => r%d, %d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CSTOREA0:
            printf("cstoreA0 r%d => r%d, r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case I2I:
            printf("i2i r%d => r%d\n", cl.first_register, cl.result);
            break;
        case C2C:
            printf("c2c r%d => r%d\n", cl.first_register, cl.result);
            break;
        case C2I:
            printf("c2i r%d => r%d\n", cl.first_register, cl.result);
            break;
        case I2C:
            printf("i2c r%d => r%d\n", cl.first_register, cl.result);
            break;
        case JUMPI:
            printf("jumpI -> l%d\n",  cl.result);
            break;
        case JUMP:
            printf("jump -> r%d\n", cl.result);
            break;
        case CBR:
            printf("cbr r%d -> l%d, l%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_LT:
            printf("cmp_LT r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_LE:
            printf("cmp_LE r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_EQ:
            printf("cmp_EQ r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_GE:
            printf("cmp_GE r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_GT:
            printf("cmp_GT r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
        case CMP_NE:
            printf("cmp_NE r%d, r%d -> r%d\n", cl.first_register, cl.second_register, cl.result);
            break;
    }

    
}
