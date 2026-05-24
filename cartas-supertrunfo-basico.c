
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
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("................. SUPER TRUNFO .......................\n");  
    // Carta 1
    printf("CARTA 1:\n"); 
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf(" %s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade1); // lê uma linha inteira, incluindo espaços
    printf("População: ");
    scanf("%f", &populacao1);
    printf("Área (km²): ");
    scanf("%.2f", &area1); 
    printf("PIB (bilhões de reais): ");
    scanf("%.2f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    
    printf("\n"); // Adiciona uma linha em branco entre as cartas para melhor legibilidade
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf(" %s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade2); // LÃª uma linha inteira, incluindo espaÃ§os
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área (km²): ");
    scanf("%.2f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%.2f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf(".............................................\n");
    // Exibiçao das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("População: %f", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\n");
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
 

 

/*

O QUE FAZER:

VocÃª sÃ³ precisa implementar o cadastro e a exibiÃ§Ã£o de duas cartas.
 
Neste nÃ­vel, foque apenas na leitura, armazenamento e exibiÃ§Ã£o das informaÃ§Ãµes. VocÃª nÃ£o precisa implementar nenhuma lÃ³gica de comparaÃ§Ã£o entre as cartas ou qualquer outro recurso adicional.
 
NÃ£o utilize estruturas de repetiÃ§Ã£o (como for ou while) ou estruturas de decisÃ£o (como if ou else). Seu cÃ³digo deve ser uma sequÃªncia simples de instruÃ§Ãµes.
 

Lembre-se: este Ã© o primeiro passo. Concentre-se em entender os fundamentos de entrada, processamento e saÃ­da de dados em C. Nos prÃ³ximos nÃ­veis, vocÃª adicionarÃ¡ mais funcionalidades e complexidade ao seu jogo.


EXEMPLO:

Carta 1:
Estado: A
CÃ³digo: A01
Nome da Cidade: SÃ£o Paulo
PopulaÃ§Ã£o: 12325000
Ãrea: 1521.11 kmÂ²
PIB: 699.28 bilhÃµes de reais
NÃºmero de Pontos TurÃ­sticos: 50

Carta 2:
Estado: B
CÃ³digo: B02
Nome da Cidade: Rio de Janeiro
PopulaÃ§Ã£o: 6748000
Ãrea: 1200.25 kmÂ²
PIB: 300.50 bilhÃµes de reais
NÃºmero de Pontos TurÃ­sticos: 30    

*/