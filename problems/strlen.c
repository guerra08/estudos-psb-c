#include <stdlib.h>
#include <stdio.h>

int strlen(char *str);
int strlen(char *str){
    if(str == NULL){
        return 0;
    }

    int size = 0;
    while(*str != '\0'){
        size++;
        str++;
    }
    return size;
}

int main(){

    char palavra[] = "Bruno";
    //Todo vetor é um ponteiro!
    printf("%d",strlen(palavra));
    
    return 0;
}