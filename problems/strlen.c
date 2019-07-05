#include <stdlib.h>
#include <stdio.h>

int strlen(char *str);
int strlen(char *str){
    char *auxPointer = str;
    if(auxPointer == NULL){
        return 0;
    }

    int size = 0;
    while(*auxPointer != '\0'){
        size++;
        auxPointer++;
    }
    return size;
}

int main(){

    char palavra[] = "Bruno";
    //Todo vetor é um ponteiro!
    printf("%d",strlen(palavra));
    
    return 0;
}