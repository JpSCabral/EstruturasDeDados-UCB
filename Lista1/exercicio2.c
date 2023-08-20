#include <stdio.h>

typedef struct
{
    int Numero;
    char Letra[1];
    float Flutuante;
} Tipo;

void SetDados(Tipo *tp, int nmr, char ltr[1], int flt)
{
    (*tp).Numero = nmr;
    (*tp).Flutuante = flt;
    strcpy(tp->Letra, ltr);
}

int main()
{
    Tipo tipos;

    SetDados(&tipos, 5, "a", 76.5386583);

    printf("Numero: %d\n", tipos.Numero);
    printf("Letra: %s\n", tipos.Letra);
    printf("Float: %f", tipos.Flutuante);

    return 0;
}
