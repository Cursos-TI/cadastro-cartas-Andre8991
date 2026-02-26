#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades da Carta 1 e Carta 2
  //Carta 1
  char nomeEstado1;
  char codigoCarta1[4];
  char nomeCidade1[20];
  int populacao1;
  float areaKm1;
  double pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  //Carta 2
  char nomeEstado2;
  char codigoCarta2[4];
  char nomeCidade2[20];
  int populacao2;
  float areaKm2;
  double pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  // Área para entrada de dados da Carta 1
  printf("Digite a letra do Estado: ");
  scanf("%c", &nomeEstado1);
  printf("\nDigite a letra do estado seguido de um número de 0 a 4: ");
  scanf("%s", codigoCarta1);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nomeCidade1);
  printf("\nDigite o número de habitantes: ");
  scanf("%d", &populacao1);
  printf("\nDigite a área da cidade em quilômetros quadrados: ");
  scanf(" %f", &areaKm1);
  printf("\nDigite o PIB: ");
  scanf(" %lf", &pib1);
  printf("\nDigite a quantidade de pontos turísticos da cidade: ");
  scanf(" %d", &pontosTuristicos1);
  // Cálculo da densidade populacional e PIB per capita da Carta 1
  densidadePopulacional1 = populacao1 / areaKm1;  
  pibPerCapita1 = pib1 / populacao1;
  // Área para entrada de dados da Carta 2
  printf("\nDigite a letra do Estado: ");
  scanf(" %c", &nomeEstado2);
  printf("\nDigite a letra do estado seguido de um número de 0 a 4: ");
  scanf("%s", codigoCarta2);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nomeCidade2);
  printf("\nDigite o número de habitantes: ");
  scanf("%d", &populacao2);
  printf("\nDigite a área da cidade em quilômetros quadrados: ");
  scanf(" %f", &areaKm2);
  printf("\nDigite o PIB: ");
  scanf(" %lf", &pib2);
  printf("\nDigite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontosTuristicos2);
  // Cálculo da densidade populacional e PIB per capita da Carta 2
  densidadePopulacional2 = populacao2 / areaKm2;
  pibPerCapita2 = pib2 / populacao2;
  // Área para exibição dos dados da cidade da Carta 1 e Carta 2
  //Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", nomeEstado1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", areaKm1);
  printf("PIB: %.2lf\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);  
  //Carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", nomeEstado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", areaKm2);
  printf("PIB: %.2lf\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
return 0;
} 
