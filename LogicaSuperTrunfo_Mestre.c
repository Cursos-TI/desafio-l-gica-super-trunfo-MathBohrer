#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação de Dois Atributos/ Nível Aventureiro Master

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
    int escolha1, escolha2;

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

    // Menu interativo de seleção de dois atributos
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    switch (escolha1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
            break;
        case 5:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n6 - PIB per Capita\n7 - Super Poder\n");
            break;
        case 6:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n7 - Super Poder\n");
            break;
        case 7:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
            break;
        default:
            printf("Opção inválida!\n");
            
    }
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    // Garantir que o segundo atributo seja diferente
    if (escolha2 == escolha1) {
        printf("\nErro: você escolheu o mesmo atributo duas vezes.\n");

    }

    // Definindo variáveis temporárias para armazenar os valores dos atributos escolhidos
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        case 7: valor1_carta1 = superPoder1; valor1_carta2 = superPoder2; break;
        default: printf("Opção inválida!\n");
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        case 7: valor2_carta1 = superPoder1; valor2_carta2 = superPoder2; break;
        default: printf("Opção inválida!\n");
    }

    // Mostrar comparação
    printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1_carta1, valor1_carta2);
    printf("Atributo 2: %.2f vs %.2f\n", valor2_carta1, valor2_carta2);

    // Aplicando a regra: densidade (atributo 5) é o único que vence com menor valor
    float soma_carta1 = (escolha1 == 5 ? -valor1_carta1 : valor1_carta1) + (escolha2 == 5 ? -valor2_carta1 : valor2_carta1);
    float soma_carta2 = (escolha1 == 5 ? -valor1_carta2 : valor1_carta2) + (escolha2 == 5 ? -valor2_carta2 : valor2_carta2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma_carta1);
    printf("%s: %.2f\n", nomeCidade2, soma_carta2);

    (soma_carta1 > soma_carta2) ? printf("\n%s venceu!\n", nomeCidade1) :
    (soma_carta2 > soma_carta1) ? printf("\n%s venceu!\n", nomeCidade2) :
    printf("\nEmpate!\n");

    return 0;
}