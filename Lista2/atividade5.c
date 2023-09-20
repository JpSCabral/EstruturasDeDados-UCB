#include <stdio.h>

void insercao(int** matriz, int linhas, int colunas) {
  // Percorre a matriz linha a linha
  for (int i = 1; i < linhas; i++) {
    // Inicializa o elemento a ser inserido
    int chave = matriz[i][0];

    // Move os elementos maiores que a chave para a direita
    for (int j = i - 1; j >= 0; j--) {
      if (matriz[j][0] > chave) {
        matriz[j + 1][0] = matriz[j][0];
      } else {
        break;
      }
      matriz[j + 1][0] = chave;
    }    
  }
}

int main() {
    int linhas = 3;
    int colunas = 4;
  int matriz[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  insercao(matriz, linhas, colunas);

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}