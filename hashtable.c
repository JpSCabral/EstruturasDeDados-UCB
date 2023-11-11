#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

struct Aluno {
    int matricula;
    char nome[50];
};

struct HashNode {
    int chave;
    struct Aluno aluno;
    struct HashNode* proximo;
};

struct HashNode* criarNo(int chave, struct Aluno aluno) {
    struct HashNode* novoNo = (struct HashNode*)malloc(sizeof(struct HashNode));
    novoNo->chave = chave;
    novoNo->aluno = aluno;
    novoNo->proximo = NULL;
    return novoNo;
}

int calcularIndice(int chave) {
    return chave % TABLE_SIZE;
}

void inserirAluno(struct HashNode* tabela[], int matricula, const char* nome) {
    struct Aluno novoAluno;
    novoAluno.matricula = matricula;
    strncpy(novoAluno.nome, nome, sizeof(novoAluno.nome));

    int indice = calcularIndice(matricula);

    if (tabela[indice] == NULL) {
        tabela[indice] = criarNo(matricula, novoAluno);
    } else {
        // Lida com colisões usando encadeamento
        struct HashNode* atual = tabela[indice];
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = criarNo(matricula, novoAluno);
    }
}

struct Aluno buscarAluno(struct HashNode* tabela[], int matricula) {
    int indice = calcularIndice(matricula);

    struct HashNode* atual = tabela[indice];

    while (atual != NULL) {
        if (atual->chave == matricula) {
            return atual->aluno;
        }
        atual = atual->proximo;
    }

    struct Aluno alunoNaoEncontrado;
    alunoNaoEncontrado.matricula = -1;
    return alunoNaoEncontrado;
}

int main() {
    struct HashNode* tabela[TABLE_SIZE] = {NULL};

    for (int i = 0; i < 10; ++i) {
        int matricula;
        char nome[50];

        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nome);

        inserirAluno(tabela, matricula, nome);
    }

    int matriculaPesquisa;
    printf("\nDigite a matricula do aluno para pesquisa: ");
    scanf("%d", &matriculaPesquisa);

    struct Aluno alunoEncontrado = buscarAluno(tabela, matriculaPesquisa);

    if (alunoEncontrado.matricula != -1) {
        printf("Aluno encontrado!\n");
        printf("Matricula: %d\nNome: %s\n", alunoEncontrado.matricula, alunoEncontrado.nome);
    } else {
        printf("Aluno nao encontrado.\n");
    }

    return 0;
}
