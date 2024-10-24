#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
   



printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    
    // Exibição dos dados
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos TurísticVariáveis: %d\n", pontosTuristicos);
    
    return 0;
}
a