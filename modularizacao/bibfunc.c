#include "bibfunc.h"

int fatorialInteiro(int v){
    int res = 1;
    for(int i = v; i > 1; i--){
        res = res * i;
    }
    return res;
}

int somaInteiros(int v1, int v2){
    return v1+v2;
}