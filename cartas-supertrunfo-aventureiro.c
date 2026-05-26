
#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo Países
// Tema 1 Cadastro e Exibição de Cartas
// Objetivo: Nível Novato

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densiDemo1, densiDemo2;
    float pibPerCapita1, pibPerCapita2;

    int pontosTuristicos1, pontosTuristicos2;

    printf("**************** SUPER TRUNFO *******************\n");  
    // Carta 1
    printf("CARTA 1:\n"); 
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade1); // lê uma linha inteira, incluindo espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%.2f", &area1); 
    printf("PIB (bilhões de reais): "); 
    scanf("%.2f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    printf("\n"); // Adiciona uma linha em branco entre as cartas para melhor legibilidade
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2); // LÃª uma linha inteira, incluindo espaÃ§os
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%.2f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%.2f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // CALCULO DENSIDADE DEMOGRAFIA E PIB PER CAPITA
    densiDemo1 = populacao1 / area1;
    densiDemo2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    printf(".............................................\n");
    // Exibiçao das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("População: %d", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("A Densidade Demográfica é: %.2f hab/km²\n", densiDemo1);
    printf("O PIB Per Capita é: %.2f reais/hab\n", pibPerCapita1);

    printf("\n");
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A Densidade Demográfica é: %.2f hab/km²\n", densiDemo2);
    printf("O PIB Per Capita é: %.2f reais/hab\n", pibPerCapita2);

    return 0;
}
 

