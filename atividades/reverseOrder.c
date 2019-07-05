//Printa a string "Vida longa e prosperidade" ao contrário, mas em ordem.
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void printReverseOrder(char *s);
void printReverseOrder(char *s){

    char *aux = s;
    int size = strlen(s);
    int auxC = 0;

    for(int i = 0; i < size; i++){
        if(aux[i] == ' ' || i == size - 1){
            for(int j = i-1; j>=auxC; j--){
                printf("%c", aux[j]);
            }
            printf(" ");
            auxC = i;
        }
    }
}

int main(){

    char string[] = "Vida longa e prosperidade";
    printReverseOrder(string);

    return 0;
}