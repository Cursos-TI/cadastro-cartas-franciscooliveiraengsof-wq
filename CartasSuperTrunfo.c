#include <stdio.h>
#include <stdlib.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  // Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
  char estado[100], estado2[100];
    char cidade[100], cidade2[100];
    char buffer[100];

    int codigo, codigo2;
    double populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
  // Área para entrada de dados


    printf("CARTA 1:\n");

    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o código do estado: ");
    fgets(buffer, sizeof(buffer), stdin);
    codigo = atoi(buffer);

    printf("Digite a cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite a população: ");
    fgets(buffer, sizeof(buffer), stdin);
    populacao = atof(buffer);

    printf("Digite a área: ");
    fgets(buffer, sizeof(buffer), stdin);
    area = atof(buffer);

    printf("Digite o PIB: ");
    fgets(buffer, sizeof(buffer), stdin);
    pib = atof(buffer);

    printf("Digite os pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    pontos_turisticos = atoi(buffer);

    printf("\nCARTA 2:\n");

    printf("Digite o nome do estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o código do estado: ");
    fgets(buffer, sizeof(buffer), stdin);
    codigo2 = atoi(buffer);

    printf("Digite a cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população: ");
    fgets(buffer, sizeof(buffer), stdin);
    populacao2 = atof(buffer);

    printf("Digite a área: ");
    fgets(buffer, sizeof(buffer), stdin);
    area2 = atof(buffer);

    printf("Digite o PIB: ");
    fgets(buffer, sizeof(buffer), stdin);
    pib2 = atof(buffer);

    printf("Digite os pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    pontos_turisticos2 = atoi(buffer);
  // Área para exibição dos dados da cidade

    printf("\n--- RESULTADO ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s", estado);
    printf("Código: %d\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

return 0;
} 




    

    