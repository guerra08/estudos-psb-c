#include<stdio.h>

int ehPrimo(int *n);
int ehPrimo(int *n){
    for(int i = 2; i<(*n); i++){
        if((*n) % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int v;
    printf("Digite um numero inteiro: ");
    scanf("%d",&v);
    if(ehPrimo(&v) == 0){
        printf("O valor %d nao eh primo.",v);
    }else{
        printf("O valor %d eh primo.",v);
    }

    return 0;
}