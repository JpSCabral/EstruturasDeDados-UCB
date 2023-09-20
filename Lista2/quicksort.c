#include <stdio.h>

void quicksort(int** matriz, int inicio, int fim) {
  if (inicio >= fim) {
    return;
  }

  int pivo = matriz[inicio][0];

  int i = inicio + 1;
  int j = fim;

  while (i <= j) {
    while (matriz[i][0] < pivo) {
      i++;
    }

    while (matriz[j][0] >= pivo) {
      j--;
    }

    if (i <= j) {
      int temp = matriz[i][0];
      matriz[i][0] = matriz[j][0];
      matriz[j][0] = temp;

      i++;
      j--;
    }
  }

  quicksort(matriz, inicio, j);
  quicksort(matriz, i, fim);
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

  quicksort(matriz, 0, 2);

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}

