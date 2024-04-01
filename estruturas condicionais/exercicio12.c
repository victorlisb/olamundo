#include<stdio.h>
#include<locale.h>

void main()
{
    /*12. Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e
     mostre o valor a receber. Sabe-se que este é o composto pelo salário do funcionário acrescido de
     gratificação e descontado o imposto de 7% sobre o salário sem gratificação*/
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

    printf("O novo salario do funcionário é %f",novo_salario);







}
