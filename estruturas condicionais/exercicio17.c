#include<stdio.h>

void main()
{   /*17. Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha �
          4531. O programa deve mostrar uma mensagem de permiss�o de acesso ou n�o.*/

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

