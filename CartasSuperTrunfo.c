#include <stdio.h>

int main(){
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1; 
    float densidade1, pib_per_capita1;
    
    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    //Entrada de dados carta 1
    printf("\n=========Cadastro CARTA 1=========\n"); 
    printf("Digite o estado da carta 1 (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", &cidade1);
    
    printf("Digite a populacao da cidade da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade da carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1 (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos1); 


    //Entrada de dados carta 2
    printf("\n=========Cadastro CARTA 2=========\n");
    printf("Digite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a populacao da cidade da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade da carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2 (em bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2); 

    //CÁLCULOS CARTA 1
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;


    //CÁLCULOS CARTA 2
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;


    // SAIDA DE DADOS - CARTA 1
    printf("\n====CARTA 1====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // SAIDA DE DADOS - CARTA 2
    printf("\n====CARTA 2====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Nmero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
return 0;

}
