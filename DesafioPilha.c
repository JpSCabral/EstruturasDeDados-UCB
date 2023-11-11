#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
} Peca;

typedef struct {
    char nomeObjeto[50];
    Peca *pecas;
    int quantidadePecas;
} Objeto;

void montarObjeto(Objeto *objeto) {
    printf("Montando %s...\n", objeto->nomeObjeto);
    printf("Objeto montado com sucesso. Peças:");
    for (int i = 0; i < objeto->quantidadePecas; i++) {
        printf(" %s", objeto->pecas[i].nome);
    }
    printf("\n");
}

void desmontarObjeto(Objeto *objeto) {
    printf("Desmontando %s...\n", objeto->nomeObjeto);

    printf("Objeto desmontado. Peças:");
    for (int i = 0; i < objeto->quantidadePecas; i++) {
        printf(" %s", objeto->pecas[i].nome);
    }
    printf("\n");
}

void liberarObjeto(Objeto *objeto) {
    free(objeto->pecas);
}

int main() {
    Objeto objeto;
    int quantidadePecas;

    printf("Digite o nome do objeto: ");
    scanf("%s", objeto.nomeObjeto);

    printf("Digite a quantidade de peças a serem montadas: ");
    scanf("%d", &quantidadePecas);

    objeto.pecas = (Peca*)malloc(quantidadePecas * sizeof(Peca));
    objeto.quantidadePecas = quantidadePecas;

    for (int i = 0; i < quantidadePecas; i++) {
        printf("Digite o nome da peça %d: ", i + 1);
        scanf("%s", objeto.pecas[i].nome);
    }

    montarObjeto(&objeto);

    desmontarObjeto(&objeto);

    liberarObjeto(&objeto);

    return 0;
}
