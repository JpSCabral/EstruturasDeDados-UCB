#include <stdio.h>

int main()
{

    int matriz[] = {-2, 45, 0, 11, -9};

    for (int step = 0; step < 5 - 1; ++step)
    {

        for (int i = 0; i < 5 - step - 1; ++i)
        {

            if (matriz[i] > matriz[i + 1])
            {
                int temp = matriz[i];
                matriz[i] = matriz[i + 1];
                matriz[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; ++i) {
    printf("%d  ", matriz[i]);
  }
}
