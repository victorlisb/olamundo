/*
#include<stdio.h>

main()
{
  int n1,n2,n3,n4;
  float media;


  printf("Digite a nota 1:");
  scanf("%d",&n1);
  printf("Digite a nota 2:");
  scanf("%d",&n2);
  printf("DIgite a nota 3:");
  scanf("%d",&n3);
  printf("DIgite a nota 4:");
  scanf("%d",&n4);

  media=(n1+n2+n3+n4)/4;

  if(media>=7)
  {
  printf("Aprovado");

  }
  else
  {
  printf("Reprovado");
  }

}

 Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido; */
#include<stdio.h>

int main(void){

    int vetor[5];
    int *ponteiro = vetor;

    //Definindo os elementos do vetor (escolha do usuário)
    for(int i = 0; i < 5; i++){
        scanf("%d",ponteiro+i);

    }
    //Multiplicando o valor de cada elemento do vetor por 2
    for(int i = 0; i < 5; i++){
        *(ponteiro+i)  = *(ponteiro+i) *2;
    }
    //Imprimindo cada valor do vetor depois de multiplicado
    for(int i = 0; i < 5; i++){
        printf("Vetor[%d]:%d - Endereço: %p \n",i,*(ponteiro+i),ponteiro+i);
    }

}

