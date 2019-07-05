//Codifica uma string colocando a letra em cada posição -> letra + posicao.
#include<stdio.h>
#include<stdlib.h>

void codifica(char *frase);
void codifica(char *frase){
    int aux = 1;
    while(*frase != '\0'){ //Até chegar no final
        *frase = *frase+aux;
        aux++;
        frase++;
    }
}

int main(){

    char frase[] = "socorro"; 
    codifica(frase);

    printf("%s",frase);
    return 0;
}