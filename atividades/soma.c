#include <stdio.h>

int fatorial(int *i);
int fatorial(int *i){
    int ret = 1;
    for(int j = *i; j>0; j--){
        ret = ret * j;
    }
    return ret;
}

int soma();
int soma(){
    int ret = 1;
    int auxSum = 0;
    for(int i = 2; i<9; i++){
        ret = ret + (1/fatorial(&i));
        auxSum+=(1/fatorial(&i));
    }
    printf("AuxSum: %d\n",auxSum);
    return ret;
}

int main(){

    printf("Soma: %d", soma());
    return 0;
}