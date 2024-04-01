#include<stdio.h>
#include<locale.h>

main()
{
    float n1,n2,resultado;
    char operador;

    setlocale(LC_ALL,"Portuguese");

    printf("CALCULADORA DE 4 OPERAÇÕES \n");
    printf("Digite a expressão no formato:\n");
    printf("número+operador+numero sem espaços");
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

    printf("O valor da operação é %.2f",resultado);
}
