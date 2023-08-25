// visualizar a saida

#include <stdio.h>

struct Ponto
{
    int x;
    int y;
};

float distancia(struct Ponto *p1, struct Ponto *p2)
{
    int x1 = p1->x;
    int y1 = p1->y;
    int x2 = p2->x;
    int y2 = p2->y;

    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

float inclinacao(struct Ponto *p1, struct Ponto *p2)
{
    int x1 = p1->x;
    int y1 = p1->y;
    int x2 = p2->x;
    int y2 = p2->y;

    return (y2 - y1) / (x2 - x1);
}

int main(int argc, char const *argv[])
{
    struct Ponto p1 = {1, 2};
    struct Ponto p2 = {5, 6};

    float d = distancia(&p1, &p2);
    float i = inclinacao(&p1, &p2);

    printf("A distância entre os pontos é %.2f.\n", distancia);
    printf("A inclinação da reta que os conecta é %.2f.\n", inclinacao);
    return 0;
}
