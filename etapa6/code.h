#ifndef _CODE_
#define _CODE_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comentarios
/*
 * TODO:
 * - [✓ ] Implementar uma estrutura de dados para conter o codigo e argumentos (code_line)
 * - [✓ ] Implementar uma estrutura que tera uma lista de instrucoes (code)
 * - [✓ ] Implementar uma funcao para fornecer nomes de rotulos (label create_label(){ //something static here})
 * - [✓ ] Funcao para gerar nomes de registradores (char* create_reg_name(bool reset){ //something static here)
 * Geracao de codigo (1 passagens, percorrendo ast)
 * - [X] Funcao de percorrimento da AST e geracao de codigo, deve conter um ponteiro para todo o codigo (code)
 * - [X] Criacao de uma ou mais instrucoes ILOC para cada operacao
 * - [X] Calculo de endereço na declaracao de variaveis
 *      - [X] locais, relativo ao deslocamento do rfp (ponteiro para o topo da stack)
 *      - [X] globais, relativo ao deslocamento do rbss (base do segmento de dados)
 * - [X] Expressoes aritimeticas, com operacoes binarias
 *      - [X] Soma
 *      - [X] Subtracao
 *      - [X] Divisao
 *      - [X] Multiplicacao
 * - [X] Expressoes logicas para controle de fluxo
 *      - [X] operadores relacionais
 *      - [X] operadores logicos (&& ||)
 * - [X] Comandos de atribuicao
 * - [X] Comandos de fluxo de controle
 *   - [X] If com else opcional
 *   - [ ] Lacos de repeticao while e for
 * - [ ] Chamada de funcao (com jumpI para um label)
 * - [X] Conteudo de cada variavel esta em um endereco de memoria, que deve ser calculado no momento da declaracao
 * - [X] Antes de realizar qualquer operacao sobre uma variavel deve se carregar seu conteudo (load)
 * - [X] O valor resultante estara obrigatoriamente em um registrador e esse valor final deve ser transferido para
 *       o endereco da variavel na memorial
 */



typedef enum opcode
{
    NOP,
    LABEL,
    ADD,
    SUB,
    MULT,
    DIV,
    ADDI,
    SUBI,
    RSUBI,
    MULTI,
    DIVI,
    RDIVI,
    LSHIFT,
    LSHIFTI,
    RSHIFT,
    RSHIFTI,
    AND,
    ANDI,
    OR,
    ORI,
    XOR,
    XORI,
    LOADI,
    LOAD,
    LOADAI,
    LOADAIRFP,
    LOADAIRBSS,
    LOADA0,
    CLOAD,
    CLOADAI,
    CLOADA0,
    STORE,
    STOREAI,
    STOREAIRFP,
    STOREAIRBSS,
    STOREA0,
    CSTORE,
    CSTOREAI,
    CSTOREA0,
    I2I,
    C2C,
    C2I,
    I2C,
    JUMPI,
    JUMP,
    CBR,
    CMP_LT,
    CMP_LE,
    CMP_EQ,
    CMP_GE,
    CMP_GT,
    CMP_NE

} opcode;


typedef struct code_line// A single line of code to be written
{
    int size;            // Size in bytes of the code
    opcode op;        // Operation to be computed
    int first_register;  // First operation
    int second_register; // Second operation
    int result;          // Result to the value computed
}code_line;

typedef struct list // Commmon generic list
{
    int count;
    code_line data;
    struct list* next;
}list;

// Create list
code_line create_code_line(int first, int second, int result, opcode op);

//Create a code line accordying to the type of parameters of the instruction
//
//Normal instructions
//r0, r1 => r2 or r1 => r2, r3 (3 regs)
//add
//sub
//mult
//div
//lshift
//rshift
//and
//or
//xor
//loadA0
//cmp_LT
//cmp_LE
//cmp_EQ
//cmp_GE
//cmp_GT
//cmp_NE
//cstoreAO

code_line create_normal_code_line(opcode op);



//Immediate instructions
//r0, c1 => r1 or r1 => r2, c3 (2 regs, 1 c)
//addI
//subI
//rsubI
//multI
//divI
//rdivI
//lshiftI
//rshiftI
code_line create_immediate_code_line(int immediate, opcode op);

//2 registers only (2 regs)
//r1 => r2
//load
//cload
//store
//cstore
//i2i
//c2c
//c2i
//i2c
code_line create_two_register_code_line(opcode op);


// Imeddiate load (1 reg, 1 c)
// c1 => r1
// loadI
code_line create_immediate_load_code_line(int immediate, opcode op);


// Jump Immediate (1 label)
// -> l1
// jumpI

code_line create_immediate_jump_code_line(int immediate, opcode op);


// Sigle register (1 reg)
// -> r1
// jump

code_line create_one_register_code_line(opcode op);

// One register and 2 labels
// r1 -> l2, l3
// cbr

code_line create_conditional_branch_code_line(int label1, int label2, opcode op);



void insert_code(list* l, code_line cl);

list* concat_list(list* l1, list* l2);

void print_code_line(code_line cl); // Print one line of code based on the data of code_line
void generate_code(list* c); // Print the whole code given a code body (ILOC)
void generateAsm(list* c); //Print Assembly code given a code body
list create_code_list(code_line* c);
list initialize_code_list(); 
                             

//Create a new Label
int create_label();
int generate_label(list* l, int new_label);
// Create a new Register
int create_register();



#endif
