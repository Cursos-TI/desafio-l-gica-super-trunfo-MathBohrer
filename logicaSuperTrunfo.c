#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

// Definição das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Coleta dos dados da Carta 1
    printf("Insira os dados da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da Cidade (sem espaços, ex: SaoPaulo): ");
    scanf(" %99s", nomeCidade1);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (quantidade total em reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Coleta dos dados da Carta 2
    printf("\nInsira os dados da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B01): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade (sem espaços, ex: BeloHorizonte): ");
    scanf(" %99s", nomeCidade2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (quantidade total em reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das Cartas
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu.\n");
    }else {
        printf("População: Carta 2 venceu.\n");
    }    
    if (area1 > area2) {
        printf("Área: Carta 1 venceu.\n");
    }else{
        printf("Área: Carta 2 venceu.\n");
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu.\n");
    }else {
        printf("PIB: Carta 2 venceu.\n");
    }
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu.\n");
    }else {
        printf("Pontos Turísticos: Carta 2 venceu.\n");
    }
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu.\n");
    }else {
        printf("Densidade Populacional: Carta 2 venceu.\n");
    }
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu.\n");
    }else {
        printf("PIB per Capita: Carta 2 venceu.\n");
    }
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu.\n");
    }else {
        printf("Super Poder: Carta 2 venceu.\n");
    }
    return 0;
}
