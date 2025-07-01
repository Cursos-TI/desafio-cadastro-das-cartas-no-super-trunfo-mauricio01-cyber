#include <stdio.h>

int main() {
    // ======== CARTA 1 - Solária ========
    char codigo1[4] = "A01";
    unsigned long int populacao1 = 1200000;
    float area1 = 320.5;
    float pib1 = 25.4;
    int pontos1 = 12;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);

    // ======== CARTA 2 - Monteluz ========
    char codigo2[4] = "B03";
    unsigned long int populacao2 = 850000;
    float area2 = 210.7;
    float pib2 = 18.75;
    int pontos2 = 9;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // ======== EXIBIÇÃO DAS CARTAS ========
    printf("===== CARTA 1 - %s (Solária) =====\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.8f bilhões/hab\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n===== CARTA 2 - %s (Monteluz) =====\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.8f bilhões/hab\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ======== COMPARAÇÃO ========
    printf("\n===== RESULTADO DAS COMPARAÇÕES =====\n");

    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos turísticos: %d\n", pontos1 > pontos2 ? 1 : 0);
    printf("Densidade populacional (menor vence): %d\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
