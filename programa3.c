#include<stdio.h>
#include<locale.h>

main()
{
    //CALCULADORA COM SWITCH CASE
    float n1,n2,resultado;
    char operador;

    setlocale(LC_ALL,"Portuguese");

    printf("CALCULADORA DE 4 OPERA��ES \n");
    printf("Digite a express�o no formato: n�mero+operador+numero sem espa�os \n");
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
        default:printf("Opera��o inv�lida");
    }
    printf("O resultado � %f",resultado);



}
