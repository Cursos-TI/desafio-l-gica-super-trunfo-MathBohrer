#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas/ Nível Aventureiro

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
    int escolha;

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

    // Menu interativo de seleção de atributo para comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Estrutura de decisão para comparação
    printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);
    switch (escolha) {
        case 1:
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("%s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) printf("%s venceu!\n", nomeCidade1);
            else if (area2 > area1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) printf("%s venceu!\n", nomeCidade1);
            else if (pib2 > pib1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("%s venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) printf("%s venceu!\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 6:
            printf("PIB per Capita: %.2f vs %.2f\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) printf("%s venceu!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 7:
            printf("Super Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2) printf("%s venceu!\n", nomeCidade1);
            else if (superPoder2 > superPoder1) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}