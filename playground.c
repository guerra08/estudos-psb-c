#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mult(int v1, int v2);
int mult(int v1, int v2){
    return (v1*v2);
}

int main(){

    int res = mult(90,30);

    printf("%d",res);

    return 0;
}