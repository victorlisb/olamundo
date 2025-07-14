#include<stdio.h>

int dobra(int *x);


int main(void){

    int a = 10;
    int b = 20;

    dobra(&a);

    printf("%d",a);

}

int dobra(int *x){

    *x = 2 * *x;

    return 0;
}