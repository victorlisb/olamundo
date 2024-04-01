#include<stdio.h>

main()
{   /*17. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das
         notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7*/

   float n1,n2,n3,n4,media;

   printf("Digite a nota 1 do aluno: ");
   scanf("%f",&n1); printf("\n");

    printf("Digite a nota 2 do aluno: ");
   scanf("%f",&n2); printf("\n");

    printf("Digite a nota 3 do aluno: ");
   scanf("%f",&n3); printf("\n");

    printf("Digite a nota 4 do aluno: ");
   scanf("%f",&n4); printf("\n");

   media=(n1+n2+n3+n4)/4;

   if(media>=7)
   {
       printf("Sua media foi %f voce esta aprovado",media);
   }
   else
   {
      printf("Sua media foi %f voce esta reprovado",media);
   }
}
