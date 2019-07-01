#include <stdio.h>

void farenToCel(float *faren);
void farenToCel(float *faren){
    float res = ((*faren) - 32.00) * (5.0/9.0);
    printf("Em Celsius: %f\n",res);
}

float retCel(float *faren);
float retCel(float *faren){
    float res = ((*faren) - 32.00) * (5.0/9.0);
    return res;
}

int main(){

    float f;
    
    printf("Digite uma temperatura em Farenheit: ");
    scanf("%f",&f);

    farenToCel(&f);

    for (float i = -1000.00; i < 1000.00; i++)
    {
        float res = retCel(&i);
        if(res == i){
            printf("As temperaturas em F e C sao iguais em: %f",i);
            break;
        }
    }
    

    return 0;
}