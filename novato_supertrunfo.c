#include <stdio.h>

int main() {
    
    char estado, estado2;                // Letra de A a H
    char codigo[4], codigo2[4];             // Ex: A01, B03
    char nomeCidade[100], nomeCidade2[100];      // Nome da cidade
    int populacao, populacao2;             // Número de habitantes
    float area, area2;                // Área em km²
    float pib, pib2;                 // PIB
    int pontosTuristicos, pontosTuristicos2;      // Número de pontos turísticos

    printf("Cadastro de Cartas do Super Trunfo\n\n");

    printf("=== Carta 1 ===\n");

        printf("Informe o Estado (letra de A a H):");
        scanf("%c", &estado);

        printf("Informe o Código da Carta (ex: 01): ");
        scanf("%s", &codigo);

        printf("Informe o Nome da Cidade: ");
        scanf(" %s", &nomeCidade); 

        printf("Informe a População: ");
        scanf("%d", &populacao);

        printf("Informe a Área (em km²): ");
        scanf("%f", &area);

        printf("Informe o PIB da cidade: ");
        scanf("%f", &pib);

        printf("Informe o Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos);

        printf("\n");

        printf("=== Carta 2 ===\n");

        printf("Informe o Estado (letra de A a H):");
        scanf("%c", &estado2);

        printf("Informe o Código da Carta (ex: 01): ");
        scanf("%s", &codigo2);

        printf("Informe o Nome da Cidade: ");
        scanf(" %s", &nomeCidade2); 

        printf("Informe a População: ");
        scanf("%d", &populacao2);

        printf("Informe a Área (em km²): ");
        scanf("%f", &area2);

        printf("Informe o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Informe o Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos2);
    

    // Exibindo as informações cadastradas
    printf("\n===== Carta 1 =====\n");
        printf("Estado: %c\n", estado);
        printf("Código da Carta: %c%s\n", estado, codigo);
        printf("Nome da Cidade: %s\n", nomeCidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: R$ %.2f bilhões\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

        printf("\n===== Carta 2 =====\n");
        printf("Estado: %c\n", estado2);
        printf("Código da Carta: %c%s\n", estado2, codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

        return 0;

}