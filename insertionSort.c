// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     int j, i, key;

//     for (i = 0; i < 5; i++)
//     {
//         printf("Digite o numero %d: ", i = 1);
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\t", arr[i]);
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int arr[5];
    int i, key;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}