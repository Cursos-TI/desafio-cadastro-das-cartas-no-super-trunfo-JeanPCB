#include <stdio.h>
#include <string.h>
#include <math.h>

float popDensityCalc(int pop, float area) {
    return pop / area;
}

float pibPerCapita(float pib, int pop) {
    return pib * pow(10, 9) / pop;
}

void printCard(
    char code[], 
    char state[], 
    char city[], 
    int pop, 
    float area,
    float pib
) {
    printf("Codigo: %s\n", code);
    printf("Estado: %s\n", state);
    printf("Cidade: %s\n", city);
    printf("Populacao: %d\n", pop);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade Populacional: %.2f\n", popDensityCalc(pop, area));
    printf("PIB per Capita: %.2f\n", pibPerCapita(pib, pop));
}

int main() {
    char state1[30], state2[30];
    char cardCode1[4],cardCode2[4];
    char city1[30], city2[30];
    int pop1, pop2;
    int tourPlaces1, tourPlaces2;
    float area1, area2;
    float pib1, pib2;
    float popDens1, popDens2;
    float pibCapita1, pibCapita2;
    char buffer[100];

    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%29s", state1);

    printf("Codigo da carta: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%3s", cardCode1);

    printf("Cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%29s", city1);

    printf("Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pop1);

    printf("Area: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);

    printf("PIB: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Numero pontos turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &tourPlaces1);

    printf("=== CADASTRO CARTA 2 ===\n");

    printf("Estado: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%29s", state2);

    printf("Codigo da carta: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%3s", cardCode2);

    printf("Cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%29s", city2);

    printf("Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pop2);

    printf("Area: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);

    printf("PIB: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);

    printf("Numero pontos turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &tourPlaces2);

    printf("\n=== DADOS CARTA ===\n");
    printCard(cardCode1, state1, city1, pop1, area1, pib1);
    printCard(cardCode2, state2, city2, pop2, area2, pib2);

    return 0;
}