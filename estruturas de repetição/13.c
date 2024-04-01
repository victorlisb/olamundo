#include<stdio.h>

void main()
{   /*. Faça um programa que receba dez números e que calcule e mostre a quantidade de números
        entre 30 e 90.*/

    int n,contador;

    for(int i=1;i<=10;i++)
    {
        printf("Digite o numero %d: ",i);
        scanf("%d",&n);

        if(n>30&&n<90)
        {
            contador+=1;
        }

    }
    printf("A quantidade de numeros entre 30 e 90 digitada foi %d",contador);





}
