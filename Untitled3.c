#include<stdio.h>
#include<locale.h>

void main()
{
    int i,n,fat;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite um numero: \n");
    scanf("%d",&n);

   for(fat=1;n >1;n=n-1)
   {
       fat=fat*n;

   }

    printf("O fatorial é %d",fat);


}
