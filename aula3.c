#include<stdio.h>

int main(){

 /* ERRO COMUM
 Neste primeiro exemplo considera a conversão (type casting de ponteiros) do tipo char
 para o tipo int, isso usualmente não da certo pois um char ocupa 1 byte(8 bits na memória)
 do computador, e o inteiro ocupado 4 bytes (32 bits).
    char c = 'A'; //Ocupa 1 byte na memória, ou seja 8 bit
    char *pc = &c;

    printf("Endereço de C = %p\n",pc);
    printf("O conteudo de C = %c \n\n",c);

    int *int_pc = (int *)pc; Conversão do tipo de ponteiro

    printf("Endereço de C = %p\n",pc);
    printf("O conteudo de C = %d",*int_pc); */

    int a = 1000;
    int *px = &a;

    printf("Endereço de a = %p\n",px);
    printf("O conteudo de x = %d \n\n",*px);

    char *pc = (char *)px; /*Aqui o compilador é forçado a tratar o mesmo endereço de memória
    como se fosse um ponteiro do tipo char, antes era referido com 4 bytes de memória, agora
    com 1 byte de memória, truncando 3 bytes da frente.*/

    printf("Endereço apontado por pc = %p\n",pc);
    printf("O conteudo do endereço apontado por pc = %d",*pc);


}