#include <stdio.h>

// void bubblesort(int matriz[])
// {
//     int aux;

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (matriz[j] > matriz[j + 1])
//             {
//                 aux = matriz[j];
//                 matriz[j] = matriz[j + 1];
//                 matriz[j + 1] = aux;
//             }
//         }
//     }
// }

int main(int argc, char const *argv[])
{

    int matriz[10] = {5, 3, 7, 9, 10, 6, 53, 23, 50, 1};
    int aux;

    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", matriz[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[j] > matriz[j + 1])
            {
                aux = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", matriz[i]);
    }

    return 0;
}
