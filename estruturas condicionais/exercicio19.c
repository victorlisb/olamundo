#include<stdio.h>
#include<locale.h>

void main()
{
    /*19. Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso
     ideal, utilizando as seguintes fórmulas:
     - homens: (72.7 * h) – 58
     - mulheres: (62.1 * h) – 44.7*/
     float altura,peso_ideal;
     char genero;
     setlocale(LC_ALL,"Portuguese");

     printf("Voce é homem ou mulher ? (Digite H para homem e M para mulher) \n");
     scanf("%c",&genero);


     if(genero=='H')
     {
         printf("Digite sua altura: \n");
         scanf("%f",&altura);
         peso_ideal=(72.7*altura)-58;
         printf("Seu peso ideal é %.2f Kg",peso_ideal);

      }
      else
      {
          if(genero=='M')
          {
              printf("Digite sua altura: \n");
              scanf("%f",&altura);
              peso_ideal=(62.1*altura)-44.7;
              printf("Seu peso ideal é %.2f Kg",peso_ideal);
          }
          else
          {
              printf("Operação invalida");
          }
      }
}

