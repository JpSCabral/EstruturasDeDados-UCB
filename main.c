#include <stdio.h>
struct cadastro_aluno
{
    char nome[50], curso[30], email[50];
    int matricula, telefone;
    float nota1, nota2, nota3, media;
} aluno;
struct cadastro_professor
{
    char nome[50], email[50], endereco[40];
    int telefone, cpf, matricula;
} professor;

int main()
{
    struct cadastro_aluno aluno;
    int i = 1;


    printf("--------------- Cadastro de aluno -------------------\n\n\n");

    printf("digite o nome: ");
    fflush(stdin);
    fgets(aluno.nome, 50, stdin);

    printf("digite o nome do curso: ");
    fflush(stdin);
    fgets(aluno.curso, 30, stdin);

    printf("digite o email: ");
    fflush(stdin);
    fgets(aluno.email, 50, stdin);

    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Digite o telefone: ");
    scanf("%d", &aluno.telefone);


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


printf("--------------- Cadastro de aluno -------------------\n\n\n");

    printf("digite o nome: ");
    fflush(stdin);
    fgets(professor.nome, 50, stdin);

    printf("digite o endereco: ");
    fflush(stdin);
    fgets(professor.endereco, 40, stdin);

    printf("digite o email: ");
    fflush(stdin);
    fgets(professor.email, 50, stdin);
    
    printf("Digite o CPF: ");
    scanf("%d", &professor.cpf);

    printf("Digite a matricula: ");
    scanf("%d", &professor.matricula);

    printf("Digite o telefone: ");
    scanf("%d", &professor.telefone);



    printf("\n\n--------------------- Dados Cadastrados ---------------\n\n\n");
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Curso: %s\n", aluno.curso);
    printf("Email: %s\n", aluno.email);
    printf("Telefone: %d\n", aluno.telefone);
    printf("Media: %f\n", aluno.media);
    
    return 0;
}
