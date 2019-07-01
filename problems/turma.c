#include <stdio.h>
#include <stdlib.h>

struct ALUNO{
    char *nome;
    float nota;
    struct ALUNO *prox;
} ALUNO;

struct TURMA{
    float media;
    struct ALUNO *lista;
    int qtd;
} TURMA;

void gerenciamento(struct TURMA *t);
void gerenciamento(struct TURMA *t){
    struct ALUNO *aux = t->lista;
    float sum = 0;
    for(int i = 0; i<t->qtd; i++){
        printf("%s -- %f\n",aux->nome,aux->nota);
        sum+=aux->nota;
        aux = aux->prox;
    }
    printf("Media da turma: %f", sum/t->qtd);
}

int main(){
    

    struct ALUNO *primeiro = malloc (sizeof (struct ALUNO));
    primeiro->nome = "Bruno";
    primeiro->nota = 10;

    struct ALUNO *segundo = malloc (sizeof (struct ALUNO));
    segundo->nome = "Joao";
    segundo->nota = 8;
    primeiro->prox = segundo;

    int qtd = 2;

    struct TURMA *t = malloc(sizeof(struct TURMA));

    t->lista = primeiro;
    t->qtd = qtd;

    gerenciamento(t);

    free(primeiro);
    free(segundo);

    return 0;
}