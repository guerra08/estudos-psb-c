#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < sizeof(vetor)/sizeof(int); i++){
        vetor[i] = (i+1)*2;
        printf("%d\n",vetor[i]);
    }

    int aux = 3;

    int vetor2[5];

    //Um vetor pode ser acessado como um ponteiro

    for(int i = 0; i<5; i++){
        aux = aux * 3;
        *(vetor2+i) = aux;
        printf("%d\n",*(vetor2+i));
    }

    return 0;
}