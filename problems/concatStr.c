#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strConcat(char *a, char *b);
char * strConcat(char *a, char *b){

    int sizeA = strlen(a);
    int sizeB = strlen(b);
    int size = sizeA+sizeB+1;
    char *c = malloc(size * (sizeof(char)));
    int aux = 0;

    for(int i = 0; i < sizeA; i++){
        c[i] = *a;
        a++;
        aux++;
    }

    for(int i = 0; i < sizeB; i++){
        c[aux] = *b;
        b++;
        aux++;
    }

    c[aux] = '\0';

    return c;
} 
int main(){

    char *v1 = "meu nome eh";
    char *v2 = "Bruno";

    char *ret = strConcat(v1,v2);

    printf("%s",ret);

    return 0;
}