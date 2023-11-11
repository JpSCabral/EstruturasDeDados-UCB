#include <stdio.h>
int main(int argc, char const *argv[])
{
    int vet[12] = {2, 5, 6, 4, 7, 8, 34, 56, 23, 78, 97, 1};
    int i, j, temporario;

    for (int i = 0; i < 12; i++)
    {
        printf(" [%d] ", vet[i]);
    }

    for (i = 1; i < 12; i++) // Começa a partir do índice 1
    {
        temporario = vet[i];
        j = i - 1; // Inicializa j dentro do loop

        while (j >= 0 && vet[j] > temporario) // Verifica j >= 0 e compara com temporario
        {
            vet[j + 1] = vet[j];
            j = j - 1;
        }

        vet[j + 1] = temporario;
    }

    printf("\nArray ordenado:\n");
    for (int i = 0; i < 12; i++)
    {
        printf(" [%d] ", vet[i]);
    }
    return 0;
}

// void insertsort(int *vet[], int fim)
// {
//     int i, j, temporario;

//     for (i = 0; i < fim - 1; i++)
//     {
//         if (vet[i] > vet[i + 1])
//         {
//             temporario = vet[i + 1];
//             vet[i + 1] = vet[i];
//             vet[i] = temporario;
//         }
//         j = i - 1;
//         while (j >= 0)
//         {
//             if (temporario < vet[j])
//             {

//                 vet[j + 1] = vet[j];
//                 vet[j] = temporario;
//             }else{
//                 break;
//             }
//             j = j-1;
//         }
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int vet[12] = {2, 5, 6, 4, 7, 8, 34, 56, 23, 78, 97, 1};
//     int i, j, temporario;

//     for (int i = 0; i < 12; i++)
//     {
//         printf(" [%d] ", vet[i]);
//     }

//     for (i = 1; i < 12 - 1; i++)
//     {
//         if (vet[i] > vet[i + 1])
//         {
//             temporario = vet[i + 1];
//             vet[i + 1] = vet[i];
//             vet[i] = temporario;
//         }
//         j = i - 1;
//         while (j >= 0)
//         {
//             if (temporario < vet[j])
//             {

//                 vet[j + 1] = vet[j];
//                 vet[j] = temporario;
//             }else{
//                 break;
//             }
//             j = j-1;
//         }
//     }

//     for (int i = 0; i < 12; i++)
//     {
//         printf(" [%d] ", vet[i]);
//     }
//     return 0;
// }







