#include<stdio.h>

main()
{

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
