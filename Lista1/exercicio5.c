// repeticao do cadastro autor

#include <stdio.h>

struct Livro
{
    char titulo[256];
    char autor[256];
    int ano_publicacao;
};

void addlivro(struct Livro livros[], int *cont)
{
    printf("\n--------------Adicionar livro---------------\n");
    printf("Digite o titulo: ");
    fflush(stdin);
    fgets(livros[*cont].titulo, 256, stdin);
    printf("Digite o autor: ");
    fflush(stdin);
    fgets(livros[*cont].autor, 256, stdin);
    printf("Digite o ano de publicacao: ");
    scanf("%d", &livros->ano_publicacao);
    printf("\n-----------------------------------------------\n");
    (*cont)++;
}

void impLivros(struct Livro livros[], int cont)
{
    for (int i = 0; i < cont; i++)
    {
        printf("----------------------\n");
        printf("Nome: %s\nAutor: %s\nAno de publicacao: %d", livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
        printf("----------------------\n");
    }
}
int main()
{
    struct Livro livros [50];
    int opc = 0, contador = 0;

    while (opc != 4)
    {
        printf("\n\n=============================\n");
        printf("1 - adicionar livro\n2 - Listar livros\n3 - Buscar livro pelo autor\n4 - Fechar sistema\n=============================\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            addlivro(livros, &contador);
            break;
        case 2:
           impLivros(livros, contador);
            break;
        case 3:

            break;
        case 4:
            printf("Encerrando sistema..");
            break;
        }
    }

    return 0;
}


// int main()
// {
//     // Declara um vetor para armazenar os livros
//     struct Livro livros[100];

//     // Variável para armazenar o número de livros cadastrados
//     int n_livros = 0;

//     // Loop para permitir ao usuário adicionar informações de livros
//     while (1)
//     {
//         // Solicita ao usuário as informações do livro
//         printf("Título: ");
//         fgets(livros[n_livros].titulo, 256, stdin);
//         printf("Autor: ");
//         fgets(livros[n_livros].autor, 256, stdin);
//         printf("Ano de publicação: ");
//         scanf("%d", &livros[n_livros].ano_publicacao);

//         // Solicita ao usuário se deseja continuar adicionando livros
//         printf("Deseja adicionar outro livro? (1 - Sim | 0 - Não): ");
//         int resposta;
//         scanf("%d", &resposta);
//         if (resposta == 0)
//         {
//             break;
//         }

//         // Incrementa o número de livros cadastrados
//         n_livros++;
//     }

//     // Lista todos os livros cadastrados
//     printf("\nListagem de livros:\n");
//     for (int i = 0; i < n_livros; i++)
//     {
//         printf("Título: %s\nAutor: %s\nAno de publicação: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
//     }

//     // Busca livros por autor
//     printf("\nBusca de livros por autor:\n");
//     char autor[256];
//     printf("Digite o nome do autor: ");
//     fgets(autor, 256, stdin);

//     // Loop para buscar livros por autor
//     for (int i = 0; i < n_livros; i++)
//     {
//         if (strstr(livros[i].autor, autor) != NULL)
//         {
//             printf("Título: %s\nAutor: %s\nAno de publicação: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
//         }
//     }

//     return 0;
// }