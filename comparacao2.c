#include<stdio.h>
#include<string.h>

//Estou fazendo este código para testar a string de comparacao 
//Vou verificar se os nomes são iguais, caso contrário, irei juntar em um nome composto

int main(){

    char nome1[] = {"André "};

    char nome2[] = {"Victor"};

    int i = 0;

    if(nome1 == nome2){

        printf("Os nomes são iguais");
    }
    else{

        strcat(nome1,nome2); //essa função concatena a string 1 na string 2
    }

    printf("O nome completo é %s",nome1);

    

}