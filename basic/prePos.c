#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    char teste[] = "que legal!";

    char *aux = teste;

    //Prefixo
    while(*aux != '\0'){
        printf("%c", *(++aux));
    }
    aux = teste;

    printf("\n");

    //Posfixo
    while(*aux != '\0'){
        printf("%c", *(aux++));
    }

    return 0;
}