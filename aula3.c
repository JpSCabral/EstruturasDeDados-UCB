#include <stdio.h>

typedef struct
{
    int Idade;
    char Nome[50];
    int CPF;
} Pessoa;

void SetDados(Pessoa *P, int idade, char nome[50], int cpf)
{
    (*P).Idade = idade;
    (*P).CPF = cpf;
    strcpy(P->Nome, nome);
    
}

void Impressao(Pessoa P)
{
    printf("-==========Cadastrados==========-\n\n");
    printf("Nome: %s\nIdade: %d\nCPF: %d", P.Nome, P.Idade, P.CPF);
}


int main()
{
    Pessoa Joao;

    SetDados(&Joao, 20, "João da Silva", 12345678901);

    Impressao(Joao);

    return 0;
}

















// for (int i = 0; i < 5; i++)
    // {

    //     printf("-==========Cadastro==========-");
    //     printf("Nome: ");
    //     fflush(stdin);
    //     fgets(P[i].Nome, 50, stdin);

    //     printf("idade: ");
    //     scanf("%d", &P[i].Idade);

    //     printf("CPF: ");
    //     scanf("%d", &P[i].CPF);

    // }