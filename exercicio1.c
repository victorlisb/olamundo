#include<stdio.h>

main()
{
  int n1,n2,n3,n4;
  float media;


  printf("Digite a nota 1:");
  scanf("%d",&n1);
  printf("Digite a nota 2:");
  scanf("%d",&n2);
  printf("DIgite a nota 3:");
  scanf("%d",&n3);
  printf("DIgite a nota 4:");
  scanf("%d",&n4);

  media=(n1+n2+n3+n4)/4;

  if(media>=7)
  {
  printf("Aprovado");

  }
  else
  {
  printf("Reprovado");
  }

}
