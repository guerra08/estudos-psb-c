#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void geraNomes(const char **vet, int seed);
void geraNomes(const char **vet, int seed){
    srand(seed);
    int sil = rand() % (5 - 0 + 0) + 0;
    int silPos = rand() % (10 - 0 + 0) + 0;
    printf("%s",vet[silPos]);
    for(int i = 0; i<sil; i++){
        int silAux = rand() % (10 - 0 + 0) + 0;
        printf("%s",vet[silAux]);
    }

    printf("\n");
}

int main(){

    const char *siglas[10] = {
                         "elp",
                         "tram",
                         "lat",
                         "rem",
                         "thor",
                         "vax",
                         "loy",
                         "fen",
                         "nax",
                         "grub"
                     };

    for(int i = 0; i<100; i++){
        geraNomes(siglas, time(NULL)+(i*5)+157);
    }

    return 0;
}