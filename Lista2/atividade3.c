#include <stdio.h>
void insertionDesc(int v[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && v[j] > v[j - 1])
        {
            // Troca os elementos v[j] e v[j - 1]
            int temp = v[j];
            v[j] = v[j - 1];
            v[j - 1] = temp;
            j--;
        }
    }
}
int main()
{
    int v[] = {1, 5, 3, 2, 4};
    int n = sizeof(v) / sizeof(v[0]);

    insertionDesc(v, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}