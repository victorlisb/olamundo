//Funções com passagem de parâmetro por valor
#include<stdio.h>

int max (int a,int b);
int min (int a,int b);

float aumentoPercentual(int valor,float percentual);
float descontoPercentual(int valor,float percentual);
//void swap(int a,int b);

int main(){

    int a = 10,b = 20;
    
    printf("Máximo entre (%d,%d) = %d \n",a,b,max(a,b));

    printf("Mínimo entre (%d,%d) = %d \n",a,b,min(a,b));
    printf("Aumento percentual (b,10) = %f \n",aumentoPercentual(b,10.0));
    printf("Desconto percentual (b,10) = %f \n",descontoPercentual(b,10.0));
    

    return 0;
}

int max(int a,int b){

    if(a > b){
        return a;
    }
    return b;
}
int min(int a,int b){

    if(a < b){
        return a;
    }
    return b;
}


float aumentoPercentual(int valor,float percentual){

    return (float) (valor +(valor * percentual/100));
}
float descontoPercentual(int valor,float percentual){

    return (float) (valor -(valor * percentual/100));
}
//void swap(int a,int b);

