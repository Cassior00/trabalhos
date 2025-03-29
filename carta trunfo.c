#include <stdio.h>

struct Carta
{
    char codigo[4]; // Exemplo: A01, B02
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main()
{
    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\nCadastro da segunda carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\nCartas cadastradas:\n");
    printf("\nCarta 1:\nCódigo: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           carta1.codigo, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);

    printf("\nCarta 2:\nCódigo: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           carta2.codigo, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);

    return 0;
}
