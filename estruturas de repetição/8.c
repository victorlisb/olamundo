#include<stdio.h>

void main()
{
/*Fa�a um programa que receba um n�mero e que calcule e mostre a tabuada desse n�mero.*/

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
