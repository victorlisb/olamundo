#include<stdio.h>

void main()
{   /*Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
      S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n */
    int i,n;
    float s=0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s+=1.0/i;

    }

   printf("Soma da serie S = 1 + 1/2 + 1/3 + ... + 1/%d = %.2f\n", n, s);
}
