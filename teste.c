#include <stdio.h>

int main()
{
    int i, aux, n, j;

    int mtz[] = {-2, 45, 0, 11, -9};

    // for (i = 0; i < 5; i++)
    // {
    //     printf("Digite um numero: ");
    //     scanf("%d", &mtz[i]);
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d \t", mtz[i]);
    // }

    for (int step = 0; step < 5 - 1; ++step)
    {

        for (int i = 0; i < 5 - step - 1; ++i)
        {

            if (mtz[i] > mtz[i + 1])
            {
                int temp = mtz[i];
                mtz[i] = mtz[i + 1];
                mtz[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; ++i) {
    printf("%d  ", mtz[i]);
  }
}
