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
 * - [ ] Funcao de percorrimento da AST e geracao de codigo, deve conter um ponteiro para todo o codigo (code)
 * - [ ] Criacao de uma ou mais instrucoes ILOC para cada operacao
 * - [ ] Calculo de endereço na declaracao de variaveis
 *      - [ ] locais, relativo ao deslocamento do rfp (ponteiro para o topo da stack)
 *      - [ ] globais, relativo ao deslocamento do rbss (base do segmento de dados)
 * - [ ] Expressoes aritimeticas, com operacoes binarias
 *      - [ ] Soma
 *      - [ ] Subtracao
 *      - [ ] Divisao
 *      - [ ] Multiplicacao
 * - [ ] Expressoes logicas para controle de fluxo
 *      - [ ] operadores relacionais
 *      - [ ] operadores logicos (&& ||)
 * - [ ] Comandos de atribuicao
 * - [ ] Comandos de fluxo de controle
 *   - [ ] If com else opcional
 *   - [ ] Lacos de repeticao while e for
 * - [ ] Chamada de funcao (com jumpI para um label)
 * - [ ] Conteudo de cada variavel esta em um endereco de memoria, que deve ser calculado no momento da declaracao
 * - [ ] Antes de realizar qualquer operacao sobre uma variavel deve se carregar seu conteudo (load)
 * - [ ] O valor resultante estara obrigatoriamente em um registrador e esse valor final deve ser transferido para
 *       o endereco da variavel na memorial
 */



typedef enum opcode
{
    NOP,
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
    LOADA0,
    CLOAD,
    CLOADAI,
    CLOADA0,
    STORE,
    STOREAI,
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



typedef struct list // Commmon generic list
{
    int count;
    void *data;
    struct list* next;
}list;






typedef struct code_line// A single line of code to be written
{
    int size;            // Size in bytes of the code
    opcode op;        // Operation to be computed
    int first_register;  // First operation
    int second_register; // Second operation
    int result;          // Result to the value computed
}code_line;

// Create list
code_line create_code_line(int first, int second, int result, opcode op);
list* concat(list* l, code_line cl);


typedef struct code // Lis of lines of code to be written
{
    //Normally stored in reverse Bottom up
    list* body;

}code;

void print_code_line(code_line cl); // Print one line of code based on the data of code_line
void generate_code(code* c); // Print the whole code given a code body
list create_code_list(code_line* c);

//Create a new Label
int create_label();
// Create a new Register
int create_register();


#endif
