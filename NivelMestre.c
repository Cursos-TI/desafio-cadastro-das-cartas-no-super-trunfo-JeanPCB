#include <stdio.h>
#include <string.h>
#include <math.h>

float popDensityCalc(unsigned long pop, float area) {
   return pop / area;
}

double pibPerCapita(double pib, unsigned long pop) {
   return pib / pop;
}

float totalPower(
   unsigned long pop, 
   float area,
   double pib
) {
   float pibCapita = pibPerCapita(pib, pop);
   float popDens = 1 / popDensityCalc(pop, area);

   return pop + area + pib + pibCapita + popDens; 
}

void printCard(
   char code[], 
   char state[], 
   char city[], 
   unsigned long pop, 
   float area,
   double pib
) {
   printf("Codigo: %s\n", code);
   printf("Estado: %s\n", state);
   printf("Cidade: %s\n", city);
   printf("Populacao: %lu\n", pop);
   printf("Area: %.2f\n", area);
   printf("PIB: %.2f\n", pib);
   printf("Densidade Populacional: %.2f\n", popDensityCalc(pop, area));
   printf("PIB per Capita: %.2f\n\n", pibPerCapita(pib, pop));
}

int main() {
   char state1[30], state2[30];
   char cardCode1[4],cardCode2[4];
   char city1[30], city2[30];
   unsigned long pop1, pop2;
   int tourPlaces1, tourPlaces2;
   float area1, area2;
   double pib1, pib2;
   float power1, power2;
   char buffer[100];

   double pibCapita1 = pibPerCapita(pib1, pop1);
   double pibCapita2 = pibPerCapita(pib2, pop2);
   float popDens1 = popDensityCalc(pop1, area1);
   float popDens2 = popDensityCalc(pop2, area2);

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
   sscanf(buffer, "%lu", &pop1);

   printf("Area: ");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer, "%f", &area1);

   printf("PIB: ");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer, "%lf", &pib1);

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
   sscanf(buffer, "%lu", &pop2);

   printf("Area: ");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer, "%f", &area2);

   printf("PIB: ");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer, "%lf", &pib2);

   printf("Numero pontos turisticos: ");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer, "%d", &tourPlaces2);

   printf("\n=== DADOS CARTA ===\n");
   printCard(cardCode1, state1, city1, pop1, area1, pib1);
   printCard(cardCode2, state2, city2, pop2, area2, pib2);

   printf("A POPULACAO de %s e maior que a de %s?\n%d\n", city1, city2, (pop1 > pop2));
   printf("A AREA de %s e maior que a de %s?\n%d\n", city1, city2, (area1 > area2));
   printf("O PIB de %s e maior que a de %s?\n%d\n", city1, city2, (pib1 > pib2));
   printf("O PIB PER CAPITA de %s e maior que a de %s?\n%d\n", city1, city2, (pibCapita1 > pibCapita2));
   printf("A DENSIDADE POPULACIONAL de %s e menor que a de %s?\n%d\n", city1, city2, (popDens1 < popDens2));

   return 0;
}