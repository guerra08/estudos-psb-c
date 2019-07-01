#include <stdio.h>

int main(){

    int *pont;
    int *(pont2);
    int var = 5;

    int vet[] = {0,2,4,6,8};

    pont2 = vet;
    pont = &var;

    printf("%x\n",pont);
    printf("%d\n",*pont);
    printf("%d\n",*pont2);

    pont2++;

    printf("%d\n",*pont2);

    return 0;
}