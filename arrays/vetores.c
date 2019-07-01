#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < sizeof(vetor)/sizeof(int); i++){
        vetor[i] = (i+1)*2;
        printf("%d\n",vetor[i]);
    }

    return 0;
}