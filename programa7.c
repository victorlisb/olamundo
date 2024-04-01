#include<stdio.h>
#include<locale.h>

main()
{
    int numero;

    setlocale(LC_ALL,"Portuguese");

    printf("CONTAGEM REGRESSIVA \n");
    printf("Digite um numero para ser realizar a contagem regressiva até zero \n");
    printf("Digite um numero: ");
    scanf("%d",&numero);
    getchar();

    while(numero!=0)
    {
        printf("%d \n",numero);
        numero=numero-1;
        getchar();

    }

}
