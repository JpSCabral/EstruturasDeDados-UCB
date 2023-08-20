#include <stdio.h>

typedef struct
{
    int Idade;
    char Nome[50];
    int Altura;
} Pessoa;

void SetDados(Pessoa *P, int idd, char nome[50], int alt)
{
    (*P).Idade = idd;
    (*P).Altura = alt;
    strcpy(P->Nome, nome);
    
}

void Impressao(Pessoa P)
{
    printf("-==========Cadastrados==========-\n\n");
    printf("Nome: %s\nIdade: %d\nCPF: %d", P.Nome, P.Idade, P.Altura);
}


int main()
{
    Pessoa Joao;

    SetDados(&Joao, 20, "João Cabral", 1.75);

    Impressao(Joao);

    return 0;
}
