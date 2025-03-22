
#include <stdio.h>

int main() {
    // Declaracao das variaveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_pop1, pib_per_capita1;

    // Declaracao das variaveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_pop2, pib_per_capita2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculo da densidade populacional e PIB per capita para a primeira carta
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Calculo da densidade populacional e PIB per capita para a segunda carta
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibicao dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_pop1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // Exibicao dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_pop2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // Escolha do atributo para comparacao (exemplo: Populacao)
    printf("\ncomparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1: %d\n", populacao1);
    printf("Carta 2: %d\n", populacao2);

    // Determinacao da carta vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: As cartas empataram!\n");
    }

    return 0;
}
