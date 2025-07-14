//Passagem por referência
#include<stdio.h>
#include<stdlib.h>

void rMax1(int *,int *,int *);
void rMin1(int *,int *,int *);

int *rMax2(int *,int *);
int *rMin2(int *,int *);

void aumentoPercentual(int *,float,float *);
void descontoPercentual(int *,float,float *);  

void swap(int *a,int *b);

int main(void){
 
    int a = 10, b = 5;
    int resultado_max,resultado_min;
    float resultado_aumento,resultado_desconto;

    printf("a = %d e b = %d \n",a,b);

    rMax1(&a,&b,&resultado_max);
    rMin1(&a,&b,&resultado_min);

    printf("Resultado da funcao rMax1 é %d \n",resultado_max);
    printf("Resultado da funcao rMin1 é %d \n\n",resultado_min);
    
    //Nessa implementação a função inteira funciona como ponteiro
    printf("Resultado da funcao rMax2 é %d \n",*rMax2(&a,&b));
    printf("Resultado da funcao rMin2 é %d \n",*rMin2(&a,&b));

    aumentoPercentual(&a,10.0f,&resultado_aumento);
    descontoPercentual(&a,10.0f,&resultado_desconto);

    printf("Resultado aumento percentual é %f \n",resultado_aumento);
    printf("Resultado desconto percentual é %f \n\n",resultado_desconto);

 
    swap(&a,&b);

    printf("Valor de a e b depois da troca:\n");
    printf("a = %d e b = %d", a, b);

    return 0;
}

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

} 
void rMax1(int *pa,int *pb,int *result){

    if(*pa > *pb){
        *result = *pa;
    }else{
        if(*pb > *pa){
            *result = *pa;
        }
    }
}
void rMin1(int *pa,int *pb,int *result){

    if(*pa < *pb){
        *result = *pa;
    }else{
        if(*pb < *pa){
            *result = *pb;
        }
    }
}

int *rMax2(int *pa,int *pb){

    int *result = NULL;

    if(*pa > *pb){

        result = pa;
    }
    else{

        result = pb;
    }
    return result;
}
int *rMin2(int *pa,int *pb){

    int *result = NULL;

    if(*pa < *pb){

        result = pa;
    }
    else{

        result = pb;
    }
    return result;
}

void aumentoPercentual(int *valor,float percentual,float *result){

    *result = (float)(*valor +(*valor * percentual/100));

}
void descontoPercentual(int *valor,float percentual,float *result){

    *result = (float)(*valor -(*valor * percentual/100));

}