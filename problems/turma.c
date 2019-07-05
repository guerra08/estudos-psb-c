#include <stdio.h>
#include <stdlib.h>

struct ALUNO{
    char *nome;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
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
    float sumTurma = 0;
    float mediaAluno;
    for(int i = 0; i<t->qtd; i++){
        sum=aux->nota1+aux->nota2+aux->nota3+aux->nota4+aux->nota5;
        mediaAluno = sum/5.0;
        sumTurma += mediaAluno;
        aux = aux->prox;
    }
    printf("Media da turma: %f", sumTurma/t->qtd);
}

int main(){
    

    struct ALUNO *primeiro = malloc (sizeof (struct ALUNO));
    primeiro->nome = "Bruno";
    primeiro->nota1 = 10;
    primeiro->nota2 = 8;
    primeiro->nota3 = 7;
    primeiro->nota4 = 10;
    primeiro->nota5 = 9;

    struct ALUNO *segundo = malloc (sizeof (struct ALUNO));
    segundo->nome = "Joao";
    segundo->nota1 = 8;
    segundo->nota2 = 8;
    segundo->nota3 = 7;
    segundo->nota4 = 6;
    segundo->nota5 = 9;

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