/* Mesclando dois exercícios:
Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.

Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros. */

#include<stdio.h>

int recebe_vetor(int n,int *vetor,int elemento);


int main(void){

    int elemento;
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    int vetor[n];

    printf("Elemento vetor: ");
    scanf("%d",&elemento);

   recebe_vetor(n,vetor,elemento);

   for(int i = 0; i < n; i++){

    printf("%d  ", *(vetor+i));
   }

}

int recebe_vetor(int n,int *vetor,int elemento){

    for(int i = 0; i < n; i++){

        *(vetor + i) = elemento;
    }

    return 0;
}