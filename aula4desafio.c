#include <stdio.h>

int main()
{
    char conj[5][20], aux[20];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nNome %i: ", i + 1);
        scanf("%s", conj[i]);
    }

    for (i = 1; i < 5; i++) //repete o tamanho do vetor
    {
        for (j = 1; j < 5; j++)
        {
            if (strcmp(conj[j - 1], conj[j]) > 0) // verifica se tem que ser depois, se for troca de posição
            {
                strcpy(aux, conj[j - 1]);
                strcpy(conj[j - 1], conj[j]);
                strcpy(conj[j], aux);
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%s", conj[i]);
    }
    return 0;
}
