#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int Classificacao;
    char Titulo[50];
    char Diretor[50];
    char Genero[50];
    char Duracao[50];
} Filme;

// void SetDados(Filme *f, int class, char ttl[50], char dir[50],char gen[50],char dur[50])
// for (int i = 0; i < 50; i++)
// {
//     f.Titulo[i] = ttl[i];
//     f.Diretor[i] = dir[i];
//     f.Duracao[i] = dur[i];
//     f.Genero[i] = gen[i];
// }
Filme SetDados(int class, const char *ttl, const char *dir, const char *gen, const char *dur)
{
    Filme f;
    f.Classificacao = class;
    strcpy(f.Titulo, ttl);
    strcpy(f.Diretor, dir);
    strcpy(f.Genero, gen);
    strcpy(f.Duracao, dur);

    return f;
}

int main()
{
    Filme f = SetDados(2, "O Poderoso Chefão", "Francis Ford Coppola", "Crime", "175 minutos");

    printf("Classificacao: %d\n", f.Classificacao);
    printf("Titulo: %s\n", f.Titulo);
    printf("Diretor: %s\n", f.Diretor);
    printf("Genero: %s\n", f.Genero);
    printf("Duracao: %s\n", f.Duracao);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct
// {
//     int Classificacao;
//     char Titulo[50];
//     char Diretor[50];
//     char Genero[50];
//     char Duracao[50];
// } Filme;

// // void SetDados(Filme *f, int class, char ttl[50], char dir[50],char gen[50],char dur[50])
// // for (int i = 0; i < 50; i++)
// // {
// //     f.Titulo[i] = ttl[i];
// //     f.Diretor[i] = dir[i];
// //     f.Duracao[i] = dur[i];
// //     f.Genero[i] = gen[i];
// // }
// Filme SetDados(int class, const char *ttl, const char *dir, const char *gen, const char *dur)
// {
//     Filme f;
//     f.Classificacao = class;
//     strcpy(f.Titulo, ttl);
//     strcpy(f.Diretor, dir);
//     strcpy(f.Genero, gen);
//     strcpy(f.Duracao, dur);

//     return f;
// }

// int main()
// {
//     Filme f;

//     SetDados(2, "O Poderoso Chefao", "Francis Ford Coppola", "Crime", "175 minutos");

//     printf("Classificacao: %d\n", f.Classificacao);
//     printf("Titulo: %s\n", f.Titulo);
//     printf("Diretor: %s\n", f.Diretor);
//     printf("Genero: %s\n", f.Genero);
//     printf("Duracao: %s\n", f.Duracao);

//     return 0;
// }