#include<stdio.h>

void main()
{   /*3. Fa�a um programa que receba dois n�meros e mostre o maior.*/

    int n1,n2;

    printf("Digite um numero:");
    scanf("%d",&n1);printf("\n");
    printf("Digite outro numero:");
    scanf("%d",&n2);printf("\n");

    if(n1<n2)
    {
        printf("O maior numero eh o %d",n2);
    }
    else
    {
        if(n1>n2)
        {
        printf("O maior numero eh %d",n1);
        }
        else
        {
            printf("Os numeros sao iguais");
        }
    }







}
