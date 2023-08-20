#include <stdio.h>

typedef struct 
{
    int idade;
    float peso;
    float altura;
}Pessoa;

Pessoa SetDados(int idade, float peso, float altura){
    Pessoa P;
    P.altura = altura;
    P.idade = idade;
    P.peso = peso;
}

void imprimeDados(Pessoa P){
    printf("%d", &P.idade);
    printf("%2.f", &P.altura);
    printf("%2.f", &P.peso);
}

int main()
{
    Pessoa Joao;

    Joao = SetDados(18, 68.5, 1.75);

    imprimeDados(Joao);
    return 0;
}
