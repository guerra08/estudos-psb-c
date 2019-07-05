#include<stdio.h>
#include<string.h>

int cmp(char *c1, char *c2);

int cmp(char *c1, char *c2){
    char *aux1 = c1;
    char *aux2 = c2;
    while(*aux1 != '\0' && *aux2 != '\0'){
        if(*aux1 != *aux2){ //Different
            if(*aux1 < *aux2){
                return -1;
            }
            if(*aux1 >= *aux2){
                return 1;
            }
        }
        aux1++;aux2++;
    }
    if(*aux1 != *aux2){
        if(*aux1 < *aux2){
            return -1;
        }
        if(*aux1 >= *aux2){
            return 1;
        }
    }
    else{
        return 0;
    }
}

int main(){

    char c1[] = "brunooo";
    char c2[] = "bruno";

    printf("%d",cmp(c1,c2));

    return 0;
}