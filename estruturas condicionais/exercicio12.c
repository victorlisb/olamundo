#include<stdio.h>
#include<locale.h>

void main()
{
    /*12. Fa�a um programa que receba o sal�rio de um funcion�rio e, usando a tabela a seguir, calcule e
     mostre o valor a receber. Sabe-se que este � o composto pelo sal�rio do funcion�rio acrescido de
     gratifica��o e descontado o imposto de 7% sobre o sal�rio sem gratifica��o*/
    float gratificacao,salario,novo_salario,imposto;

    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor do seu salario: \n");
    scanf("%f",&salario);

    imposto=salario*0.07;

    if(salario<=1000)
    {
        gratificacao=1000;

    }
    if(salario<=2000&&salario>1000)
    {
        gratificacao=750;
    }
    if(salario<=3000&&salario>2000)
    {
        gratificacao=500;
    }
    if(salario>3000)
    {
        gratificacao=300;
    }

    novo_salario=(salario+gratificacao)-imposto;

    printf("O novo salario do funcion�rio � %f",novo_salario);







}
