#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//memória armazenada sequencialmente
typedef struct {

    int x,y;
    int tamanho;
    int vidas;
    int pontuacao;

}JOGADOR;

typedef struct{

    int x,y;
    float largura, altura;
}Retangulo;

void criar_retangulo(Retangulo *Retangulo, int x,int y,float altura,float largura);
void escalar_lados_retangulo(Retangulo *Retangulo,int alfa);
void atualizar_posicao_retangulo(Retangulo *Retangulo,int novoX, int novoY);

void criar_jogador(JOGADOR *JOGADOR,int,int,int,int);
void atualizarPontuacaoJogador(JOGADOR *JOGADOR,int novaPontuacao);
void atualizarVidasJogador(JOGADOR *JOGADOR,int novoValor);
void aumentarTamanhoJogador(JOGADOR *JOGADOR,int incremento);

int main(){

    JOGADOR j;

    criar_jogador(&j,0,0,200,10);

    printf("\n");

    printf("===== Jogador J ======= \n\n");

    printf("(j.x,j.y) = (%d,%d) \n",j.x,j.y);
    printf("j.tamanho = %d \n",j.tamanho);
    printf("j.vidas = %d \n",j.vidas);
    printf("j.pontuacao = %d \n",j.pontuacao); 


    aumentarTamanhoJogador(&j,20);
    atualizarPontuacaoJogador(&j,5);
    atualizarVidasJogador(&j,2);

    printf("\nApós as chamadas de funções \nAtualizando status do jogador...\n\n");


    printf("(j.x,j.y) = (%d,%d) \n",j.x,j.y);
    printf("j.tamanho = %d \n",j.tamanho);
    printf("j.vidas = %d \n",j.vidas);
    printf("j.pontuacao = %d \n\n",j.pontuacao); 

    Retangulo a;


    printf("=============Retângulo============= \n\n");
    criar_retangulo(&a,0,0,4.4,6.6);
    printf("(a.x,a.y) = (%d,%d) \n",a.x,a.y);
    printf("Altura retangulo = %f \n",a.altura);
    printf("Largura retangulo = %f \n\n",a.largura);

    escalar_lados_retangulo(&a,2);
 
    atualizar_posicao_retangulo(&a,2,4);

    printf("Após as chamdas de funções\nAtualizando retangulo...\n\n");
    printf("(a.x,a.y) = (%d,%d) \n",a.x,a.y);
    printf("Altura retangulo = %f \n",a.altura);
    printf("Largura retangulo = %f \n",a.largura);


    return 0;
}

void criar_jogador(JOGADOR *JOGADOR,int x,int y,int tamanho,int vidas){

    //JOGADOR APONTADO POR X;

    JOGADOR -> x = x;
    JOGADOR -> y = y;
    JOGADOR -> tamanho = tamanho;
    JOGADOR -> vidas = vidas;

    JOGADOR -> pontuacao = 0;
}

void aumentarTamanhoJogador(JOGADOR *JOGADOR,int incremento){

    JOGADOR -> tamanho = incremento;

}

void atualizarVidasJogador(JOGADOR *JOGADOR,int novoValor){

    JOGADOR -> vidas =  novoValor;

}

void atualizarPontuacaoJogador(JOGADOR *JOGADOR,int novaPontuacao){

    JOGADOR -> pontuacao = novaPontuacao;

}

void criar_retangulo(Retangulo *Retangulo, int x,int y,float altura,float largura){

    Retangulo -> x = x;
    Retangulo -> y = y;
    Retangulo -> altura = altura;
    Retangulo -> largura = largura;
}
void escalar_lados_retangulo(Retangulo *Retangulo,int alfa){

    Retangulo -> altura *= alfa;
    Retangulo -> largura *= alfa;

}

void atualizar_posicao_retangulo(Retangulo *Retangulo,int novoX, int novoY){

    Retangulo -> x = novoX;
    Retangulo -> y = novoY;
}




