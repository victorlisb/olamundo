#include<stdio.h>

void main()
{
    //estudo de vetores
    int vetori[5],i;
    int sorte[]={15,78,21,42,52,13,45};//vetor de inteiros com 5 elementos(variaveis nao necessariamente vazias)
    float num[10];//o elemento inicial é o zero
    vetori[0]=8;
    vetori[1]=3;
    vetori[2]=6;
    vetori[3]=0;
    vetori[4]=1;

    printf("vetori[3] = %d \n",vetori[3]);
    printf("sorte[6] =%d \n",sorte[6]);

    for(i=0;i<=9;i++)
    {
        printf("num [%d]=",i);
        scanf("%f",&num[i]);

    }
    for(i=0;i<=9;i++)
    {
        printf("num [%d]=%f \n",i,num[i]);//2.5,4.7,6.5,3.0,4.2,18,19.5,47.1,3.33

    }

}
