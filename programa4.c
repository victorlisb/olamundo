#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{  /*programa para ler a media final de uma disciplina
    o numero de aulas dadas, e o limite de faltas */

    float media;
    int aulas,limite,faltas;

    setlocale(LC_ALL,"Portuguese");
    printf("Digite a media final da disciplina: \n");
    scanf("%f",&media);
    printf("Digite o numero total de aulas: \n");
    scanf("%d",&aulas);
    printf("Digite o numero total de faltas:\n");
    scanf("%d",&faltas);

   //CALCULO DO LIMITE DE FALTAS 25%
   limite=0.25*aulas;

   if(media>=6&&faltas<=limite)
   {
       printf("Voce está aprovado");
   }
   else
   {
       if(media>=8&&faltas<=0.5*aulas)
       {
           printf("Voce está aprovado");
       }
       else
       {
           printf("Voce está reprovado");
       }

   }

}
