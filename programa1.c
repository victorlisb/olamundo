#include<stdio.h>
#include<locale.h>

main()
{
    float n1,n2,resultado;
    char operador;

    setlocale(LC_ALL,"Portuguese");

    printf("CALCULADORA DE 4 OPERA��ES \n");
    printf("Digite a express�o no formato:\n");
    printf("n�mero+operador+numero sem espa�os");
    scanf("%f%c%f",&n1,&operador,&n2); printf("\n");

    if(operador=='+')
    {
        resultado=n1+n2;
    }
    if(operador=='-')
    {
        resultado=n1-n2;
    }
    if(operador=='/')
    {
        resultado=n1/n2;
    }
    if(operador=='x')
    {
        resultado=n1*n2;
    }

    printf("O valor da opera��o � %.2f",resultado);
}
