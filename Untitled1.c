#include<stdio.h>

void main()
{
    int soma=0,i;

    for(i=1;i<=100;i++)
    {
       if(i%2==0)
       {
           printf("%d \n",i);
       }
    }
    printf("A soma de todos os numeros pares entre 1 e 100 é %d",soma);
}
