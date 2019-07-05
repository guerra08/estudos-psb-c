//Gera alguns nomes aleatórios a partir de silabas em um vetor (podem estar repetidos) -- TODO: melhorar repetidosc
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void geraNomes(const char **vet, int seed, int vetsize);
void geraNomes(const char **vet, int seed, int vetsize){
    srand(seed);
    int sil = rand() % (5 - 0 + 0) + 0;
    int silPos = rand() % (vetsize - 0 + 0) + 0;
    printf("%s",vet[silPos]);
    for(int i = 0; i<sil; i++){
        int silAux = rand() % (10 - 0 + 0) + 0;
        printf("%s",vet[silAux]);
    }

    printf("\n");
}

int main(){

    const char *siglas[15] = {
                         "elp",
                         "tram",
                         "lat",
                         "rem",
                         "thor",
                         "vax",
                         "loy",
                         "fen",
                         "nax",
                         "grub",
                         "lon",
                         "drax",
                         "flop",
                         "harb",
                         "mirt"
                     };

    for(int i = 0; i<100; i++){
        geraNomes(siglas, time(NULL)+(i*5)+157,15);
    }

    return 0;
}