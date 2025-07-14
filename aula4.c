#include<stdio.h>

int main(void){


    int a[5]={10,20,30,40,50};

    void *p; /*Ponteiro do tipo void pode ser atribuido a ponteiro de qualquer tipo de dado
    vai poder acessar o endereço normalmente mas vai ter dificuldade para imprimir o dado, 
    quando especificar o formato dele como %d, %c etc*/
    p = a;

    printf("Endereço de a[0]= %p \n",p);
   // printf("O conteudo de a[0] = %d",*p); ERRADO
   printf("O conteudo de a[0] = %d \n\n",*((int *)p));
   // aqui é utilizado typecasting para converter do tipo void para do tipo inteiro

   printf("Endereço errado de a[1]= %p \n",p+1); 
   //Aqui não funciona este método pois é um ponteiro do tipo void, logo o compilador não
   //entende a referência de que +1 deve pular 4 bytes na memória 
   
   printf("Endereço correto de a[1]= %p",&a[1]);


}