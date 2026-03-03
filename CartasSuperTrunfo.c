#include <stdio.h>

int main() {
  //Área para definição das variáveis para armazenar as propriedades da Carta 1 e Carta 2
  //Carta 1
  char nomeEstado1;
  char codigoCarta1[4];
  char nomeCidade1[20];
  unsigned long int populacao1;
  float areaKm1;
  double pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  double superPoderCarta1;
  //Carta 2
  char nomeEstado2;
  char codigoCarta2[4];
  char nomeCidade2[20];
  unsigned long int populacao2;
  float areaKm2;
  double pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  double superPoderCarta2;
  //Variáveis para armazenar as comparações
  int populacaoComp;
  int areakmComp;
  int pibComp;
  int pontosTuristicosComp;
  int densidadepopulacionalComp;
  int pibPerCapitaComp;
  int superPoderComp;
  //Área para entrada de dados da Carta 1
  printf("Digite a letra do Estado: ");
  scanf("%c", &nomeEstado1);
  printf("\nDigite a letra do estado seguido de um número de 0 a 4: ");
  scanf("%s", codigoCarta1);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nomeCidade1);
  printf("\nDigite o número de habitantes: ");
  scanf("%lu", &populacao1);
  printf("\nDigite a área da cidade em quilômetros quadrados: ");
  scanf(" %f", &areaKm1);
  printf("\nDigite o PIB: ");
  scanf(" %lf", &pib1);
  printf("\nDigite a quantidade de pontos turísticos da cidade: ");
  scanf(" %d", &pontosTuristicos1);
  //Cálculo da densidade populacional e PIB per capita, Super Poder da Carta 1
  densidadePopulacional1 = populacao1 / areaKm1;  
  pibPerCapita1 = pib1 / populacao1;
  superPoderCarta1 = (populacao1 + areaKm1 + pib1 + pontosTuristicos1) + (1 / densidadePopulacional1); 
  //Área para entrada de dados da Carta 2
  printf("\nDigite a letra do Estado: ");
  scanf(" %c", &nomeEstado2);
  printf("\nDigite a letra do estado seguido de um número de 0 a 4: ");
  scanf("%s", codigoCarta2);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nomeCidade2);
  printf("\nDigite o número de habitantes: ");
  scanf("%lu", &populacao2);
  printf("\nDigite a área da cidade em quilômetros quadrados: ");
  scanf(" %f", &areaKm2);
  printf("\nDigite o PIB: ");
  scanf(" %lf", &pib2);
  printf("\nDigite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontosTuristicos2);
  //Cálculo da densidade populacional e PIB per capita, Super Poder da Carta 2
  densidadePopulacional2 = populacao2 / areaKm2;
  pibPerCapita2 = pib2 / populacao2;
  superPoderCarta2 = (populacao2 + areaKm2 + pib2 + pontosTuristicos2) + (1 / densidadePopulacional2);
  //Comparação entre as cartas 1 e 2
  populacaoComp = populacao1 > populacao2;
  areakmComp = areaKm1 > areaKm2;
  pibComp = pib1 > pib2;
  pontosTuristicosComp = pontosTuristicos1 > pontosTuristicos2;
  densidadepopulacionalComp = densidadePopulacional1 > densidadePopulacional2;
  pibPerCapitaComp = pibPerCapita1 > pibPerCapita2;
  superPoderComp = superPoderCarta1 > superPoderCarta2;
  //Área para exibição dos dados da cidade da Carta 1 e Carta 2
  //Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", nomeEstado1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
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
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", areaKm2);
  printf("PIB: %.2lf\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  //Comparação das cartas
  printf("\nComparação de cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", populacaoComp);
  printf("Área: Carta 1 venceu (%d)\n", areakmComp);
  printf("PIB: Carta 1 venceu (%d)\n", pibComp);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicosComp);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacionalComp);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapitaComp);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoderComp);

return 0;
} 
