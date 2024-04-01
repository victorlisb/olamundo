#include<stdio.h>

void main()
{
    int a,b=1,sequencia=0;

    while(sequencia<=100)
    {
        printf("%d \n",sequencia);

        a=b;
        b=sequencia;
        sequencia=a+b;

    }

}
