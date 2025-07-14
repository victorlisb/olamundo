#include<stdio.h>
#include<stdlib.h>

#define MAX_ELEMENTS 100

int main(void){
    int i;
    int vetor[MAX_ELEMENTS];

    int *pv = NULL;

    int x;

    for(i = 0; i < MAX_ELEMENTS;i++){

        vetor[i] = i;

        printf("vetor[%d] = %d \n",i,vetor[i]);

    }
    //Mesmo endereço de memória com as duas declarações
    pv = &vetor[0];
    printf("pv -> %p \n",pv);

    pv = vetor;
    printf("pv -> %p \n",pv);
    /* pv = vetor o nome do vetor é o sinonimo para localizaçã
    o do primeiro elemento do vetor na memória*/

    //-------------------------------------------------------

    x = *pv; /*estamos pegando o conteúdo de memória para qual
    o ponteiro pv aponta*/
    printf("x = %d \n",x);

    x = *(pv + 1); /*Aqui estamos pegando o segundo elemento 
    do array  */
    printf("x = %d \n",x);

    x = *(pv + 2);
    printf("x = %d \n",x); 

    for(i = 0; i <MAX_ELEMENTS; i++){

        x = *(pv + i);

        printf("x = %d \n",x);
        printf("vetor[%d] = %d \n",i,vetor[i]);

    }

    /*x = *(pv + i); são equivalentes printf("vetor[%d] = %d \n",i,vetor[i]); */







}