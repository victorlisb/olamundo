#include<stdio.h>

void main()
{
/*Faça um programa que receba um número e que calcule e mostre a tabuada desse número.*/

  int n,i,resultado;

  printf("Digite um numero:");
  scanf("%d",&n);printf("\n");

  for(i=0;i<=10;i++)
   {
       resultado=n*i;

      printf("%d x %i = %d \n",n,i,resultado);
      getchar();
   }
}
