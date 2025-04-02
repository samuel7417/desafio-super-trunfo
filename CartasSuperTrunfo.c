#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49s", carta1.nomeCidade);
    printf("População: ");
    scanf(" %d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf(" %f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta1.pontosTuristicos);
    
    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49s", carta2.nomeCidade);
    printf("População: ");
    scanf(" %d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf(" %f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta2.pontosTuristicos);
    
    // Exibição das cartas cadastradas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
