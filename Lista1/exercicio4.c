// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

#include <stdio.h>
#include <stdlib.h>

typedef struct Contato
{
    char telefone[20];
    char nome[50];
} pessoa;

void setContato(struct Contato pessoa, char Telefone[20], char Nome[50])
{
    strcpy(pessoa.nome, Nome);
    strcpy(pessoa.telefone, Telefone);
}

void addCtt(struct Contato pessoa[], int *cont)
{
    printf("\n--------------Adicionar contato---------------\n");
    printf("Digite o nome: ");
    fflush(stdin);
    fgets(pessoa[*cont].nome, 50, stdin);
    printf("Digite o telefone: ");
    fflush(stdin);
    fgets(pessoa[*cont].telefone, 20, stdin);
    printf("\n-----------------------------------------------\n");
    (*cont)++;
}

void imprimirCtts(struct Contato pessoa[], int cont)
{
    for (int i = 0; i < cont; i++)
    {
        printf("----------------------\n");
        printf("Nome: %s\nTelefone: %s", pessoa[i].nome, pessoa[i].telefone);
        printf("----------------------\n");
    }
}

int main()
{
    struct Contato pessoa[50];
    int opc = 0;
    int contador = 0;

    while (opc != 4)
    {
        printf("\n\n=============================\n");
        printf("1 - adicionar contato\n2 - Listar contatos\n3 - Buscar contato pelo nome\n4 - Fechar sistema\n=============================\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            addCtt(pessoa, &contador);
            break;
        case 2:
            imprimirCtts(pessoa, contador);
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

// addContato(&isa,12345678,"Isabella");

// imprimirCtts(isa);
