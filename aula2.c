#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int i = 0;

    int *p = a;
    int *pBase = a;

    //printf("&a[0]= %p e seu valor é %d",p,*p);

    for (i = 0;i < 10; i++){

        p = pBase + i; 
        printf("&a[%d] = %p \n",i,p);


    }

    

    
}