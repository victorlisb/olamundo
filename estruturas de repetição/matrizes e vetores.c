#include<stdio.h>

void main()
{
    //declarar a matriz
    int i,j;
    int matriz[4][4]={1,5,6,7,
                      4,7,9,1,
                      0,2,4,2,
                      5,0,1,0};

    printf("Matriz \n\n");

    //i controla as linhas e j controla as matrizes
    for(i=0;i<4;i++) //looping das linhas
    {
        for(j=0;j<4;j++)//looping das colunas
        {
            printf("%d      ",matriz[i][j]);
        }
        printf("\n\n");//quando termina a contagem do j, iniciamos uma nova linha
    }


}
