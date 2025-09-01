#include <stdio.h>

int main() {
    int pop1, pop2, tour1, tour2;
    float area1, area2, pib1, pib2;

    printf("=== CADASTRO CARTA A01 ===\n");
    printf("Populacao: ");
    scanf("%d", &pop1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero pontos turisticos: ");
    scanf("%d", &tour1);

    printf("=== CADASTRO CARTA A02 ===\n");
    printf("Populacao: ");
    scanf("%d", &pop2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero pontos turisticos: ");
    scanf("%d", &tour2);

    printf("\n=== DADOS CARTA A01 ===\n\n");
    printf("%-10s %-20s %-30s %-16s", "Populacao", "Area", "PIB", "Pontos turisticos\n");
    printf("%-10d %-20.2f %-30.2f %-16d", pop1, area1, pib1, tour1);

    printf("\n=== DADOS CARTA A02 ===\n\n");
    printf("%-10s %-20s %-30s %-16s", "Populacao", "Area", "PIB", "Pontos turisticos\n");
    printf("%-10d %-20.2f %-30.2f %-16d", pop2, area2, pib2, tour2);

    return 0;
}