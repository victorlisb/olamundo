#include<stdio.h>

size_t strlen(char *);


int main(void){

    int x = sizeof(int);

  //  printf("%d",x);

    char *s = "ABCDEFGHIJK";

    printf("O tamanho de '%s' = %d",s,(int)strlen(s));


}

size_t strlen(char *s){

    char *p = s;

    while( *p != '\0'){

        p++;
    }

    return (size_t)(p -s);


}