#include <stdio.h>
int busca_sequencial(int** matriz, int linhas, int colunas, int valor) {
  int i = 0;
  int j = 0;

  while (i < linhas) {
    while (j < colunas) {
      if (matriz[i][j] == valor) {
        return i * colunas + j;
      }

      j++;
    }

    i++;
    j = 0;
  }

  return -1;
}

int main() {
  int matriz[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  int valor = 7;

  int posicao = busca_sequencial(matriz, 3, 4, valor);

  if (posicao == -1) {
    printf("O valor %d não foi encontrado.\n", valor);
  } else {
    printf("O valor %d foi encontrado na posição %d.\n", valor, posicao);
  }

  return 0;
}
