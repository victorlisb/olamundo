#include<stdio.h>

main()
{
    int opcao;

    printf("Escolha o tipo de atendimento: \n");
    printf("1.Atendimento preferencial: Idoso \n");
    printf("2.Atendimento preferencial: Gestante \n");
    printf("3.Atendimento normal \n\n");
    printf("...");
    scanf("%d",&opcao);

    if(opcao==1||opcao==2) //OU duas barras verticais
    {
        printf("Atendimento preferencial selecionado!");
    }
     else
     {
        printf("Atendimento normal selecionado!");
     }

}
