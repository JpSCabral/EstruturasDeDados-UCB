#include <stdio.h>
struct Aluno
{
    char nome[50];
    int matricula;
    float nota1, nota2, nota3, media;
} aluno;

int main()
{
    struct Aluno aluno;
    int i = 1;


    printf("--------------- Cadastro de aluno -------------------\n\n\n");

    printf("digite o nome: ");
    fflush(stdin);
    fgets(aluno.nome, 50, stdin);

    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Digite a %d nota: ", i);
    scanf("%f", &aluno.nota1);
    i++;
    printf("Digite a %d nota: ", i);
    scanf("%f", &aluno.nota2);
    i++;
    printf("Digite a %d nota: ", i);
    scanf("%f", &aluno.nota3);
    i++;

    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

    if (aluno.media >= 7)
    {
        printf("O aluno %s esta aprovado, media: %f", aluno.nome, aluno.media);
    }else{
        printf("O aluno %s esta reprovado, media: %f", aluno.nome, aluno.media);
    }
    
}
