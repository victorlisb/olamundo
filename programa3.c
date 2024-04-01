#include<stdio.h>
#include<locale.h>

main()
{
    //CALCULADORA COM SWITCH CASE
    float n1,n2,resultado;
    char operador;

    setlocale(LC_ALL,"Portuguese");

    printf("CALCULADORA DE 4 OPERAÇÕES \n");
    printf("Digite a expressão no formato: número+operador+numero sem espaços \n");
    scanf("%f%c%f",&n1,&operador,&n2);
    printf("\n");

    switch(operador)
    {
        case'+':resultado=n1+n2;
             break;
        case'-':resultado=n1-n2;
             break;
        case'/':resultado=n1/n2;
             break;
        case'*':resultado=n1*n2;
             break;
        default:printf("Operação inválida");
    }
    printf("O resultado é %f",resultado);



}
