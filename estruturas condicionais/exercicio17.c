#include<stdio.h>

void main()
{   /*17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
          4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.*/

    int senha=4531;
    int tentativa;

    printf("Digite sua senha: \n");
    scanf("%d",&tentativa);

    if(tentativa==senha)
    {
        printf("Acesso Liberado");
    }
    else
    {
        printf("Acesso Negado");
    }
}

