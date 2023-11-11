#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
} Pessoa;

typedef struct {
    Pessoa *clientes;
    int capacidade;
    int tamanho;
    int frente;
    int fim;
} FilaClientes;
void inicializarFila(FilaClientes *fila, int capacidade) {
    fila->clientes = (Pessoa*)malloc(capacidade * sizeof(Pessoa));
    fila->capacidade = capacidade;
    fila->tamanho = 0;
    fila->frente = 0;
    fila->fim = -1;
}

int filaVazia(FilaClientes *fila) {
    return fila->tamanho == 0;
}
int filaCheia(FilaClientes *fila) {
    return fila->tamanho == fila->capacidade;
}

void incluirNaFila(FilaClientes *fila, char nome[]) {
    if (filaCheia(fila)) {
        printf("A fila está cheia. Não é possível adicionar mais pessoas.\n");
        return;
    }

    fila->fim = (fila->fim + 1) % fila->capacidade;
    strcpy(fila->clientes[fila->fim].nome, nome);
    fila->tamanho++;

    printf("%s foi adicionado(a) à fila com sucesso!\n", nome);
}

void excluirDaFila(FilaClientes *fila) {
    if (filaVazia(fila)) {
        printf("A fila está vazia. Não há pessoas para remover.\n");
        return;
    }

    printf("%s foi atendido(a) e removido(a) da fila.\n", fila->clientes[fila->frente].nome);

    // Incrementa a frente da fila circular
    fila->frente = (fila->frente + 1) % fila->capacidade;
    // Decrementa o tamanho da fila
    fila->tamanho--;
}

void liberarFila(FilaClientes *fila) {
    free(fila->clientes);
}

int main() {
    FilaClientes fila;
    int capacidadeFila, quantidadePessoas;
    char nome[50];

    printf("Digite a capacidade da fila: ");
    scanf("%d", &capacidadeFila);

    inicializarFila(&fila, capacidadeFila);

    printf("Digite a quantidade de pessoas a serem atendidas na fila: ");
    scanf("%d", &quantidadePessoas);

    for (int i = 0; i < quantidadePessoas; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);
        incluirNaFila(&fila, nome);
    }

    printf("\nAtendendo pessoas na fila:\n");

    for (int i = 0; i < quantidadePessoas; i++) {
        excluirDaFila(&fila);
    }

    liberarFila(&fila);

    return 0;
}
