#include <stdio.h>
    



int main() {
    char estado[50];
    char carta[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turisticos;

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &turisticos);

    printf("\nInformações digitadas:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", turisticos);
    


    

    return 0;
}
