#include<stdio.h>

/*Faça um programa que receba a idade de dez pessoas e que calcule e mostre a quantidade de
pessoas com idade maior ou igual a 18 anos.*/

void main()
{
    int idade,n,maioridade=0;

    for(int i=1;i<=10;i++)
    {
        printf("Qual a idade da pessoa %d :",i);
        scanf("%d",&idade);

        if(idade>=18)
        {
            maioridade=maioridade+1;
        }
    }
    printf("O numero de pessoas com maior de 18 anos eh %d",maioridade);
}

