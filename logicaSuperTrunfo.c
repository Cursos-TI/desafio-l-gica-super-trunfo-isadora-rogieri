#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Cadastro das cartas
// Objetivo: No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando switch.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int nPontosTuristicos1, nPontosTuristicos2;
  unsigned long int populacao1, populacao2;
  float area1, pib1, area2, pib2;
  char estado1, estado2;
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[20], nomeCidade2[20];

  float densidade1, pibPerCapita1;
  float densidade2, pibPerCapita2;

  // Área para entrada de dados
  // Cadastro Carta 1
  printf("Cadastro da Carta 1\n");

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta (01 a 04): ");
  scanf("%s", codigoCarta1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &nPontosTuristicos1);

  // Cálculos Carta 1
  densidade1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

  // Cadastro Carta 2
  printf("Cadastro da Carta 2\n");

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Codigo da carta (01 a 04): ");
  scanf("%s", codigoCarta2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &nPontosTuristicos2);

  // Cálculos Carta 2
  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;

  // Área para exibição dos dados da cidade
  printf("\n===== CARTA 1 =====\n");
  printf("Cidade: %s\n", nomeCidade1);
  printf("Estado: %c\n", estado1);
  printf("Codigo: %c%s\n", estado1, codigoCarta1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", nPontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n===== CARTA 2 =====\n");
  printf("Cidade: %s\n", nomeCidade2);
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%s\n", estado2, codigoCarta2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", nPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

  int opcao;

  printf("\n===== MENU DE COMPARACAO =====\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("Escolha uma opcao: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("\nComparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s : %d \n", nomeCidade1, populacao1);
    printf("Carta 2 - %s : %d \n", nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("Resultado: Cidade 1 %s venceu.\n", nomeCidade1);
    }
    else if (populacao1 == populacao2)
    {
      printf("EMPATE! - As cidades tem população igual.\n");
    }
    else
    {
      printf("Resultado: Cidade 2 %s venceu.\n", nomeCidade2);
    }
    break;
  case 2:
    printf("\nComparação de cartas (Atributo: Área)\n");
    printf("Carta 1 - %s : %.2f \n", nomeCidade1, area1);
    printf("Carta 2 - %s : %.2f \n", nomeCidade2, area2);

    if (area1 > area2)
    {
      printf("Resultado: Cidade 1 %s venceu.\n", nomeCidade1);
    }
    else if (area1 == area2)
    {
      printf("EMPATE! - As cidades tem área igual.\n");
    }
    else
    {
      printf("Resultado: Cidade 2 %s venceu.\n", nomeCidade2);
    }
    break;
  case 3:
    printf("\nComparação de cartas (Atributo: PIB)\n");
    printf("Carta 1 - %s : %.2f \n", nomeCidade1, pib1);
    printf("Carta 2 - %s : %.2f \n", nomeCidade2, pib2);

    if (pib1 > pib2)
    {
      printf("Resultado: Cidade 1 %s venceu.\n", nomeCidade1);
    }
    else if (pib1 == pib2)
    {
      printf("EMPATE! - As cidades tem o PIB igual.\n");
    }
    else
    {
      printf("Resultado: Cidade 2 %s venceu.\n", nomeCidade2);
    }
    break;
  case 4:
    printf("\nComparação de cartas (Atributo: Pontos Turisticos)\n");
    printf("Carta 1 - %s : %.2f \n", nomeCidade1, nPontosTuristicos1);
    printf("Carta 2 - %s : %.2f \n", nomeCidade2, nPontosTuristicos2);

    if (nPontosTuristicos1 > nPontosTuristicos2)
    {
      printf("Resultado: Cidade 1 %s venceu.\n", nomeCidade1);
    }
    else if (nPontosTuristicos1 == nPontosTuristicos2)
    {
      printf("EMPATE! - As cidades tem o número de pontos turisticos igual.\n");
    }
    else
    {
      printf("Resultado: Cidade 2 %s venceu.\n", nomeCidade2);
    }
    break;

  case 5:
    printf("\nComparação de cartas (Atributo: Densidade Demografica)\n");
    printf("Carta 1 - %s : %.2f \n", nomeCidade1, densidade1);
    printf("Carta 2 - %s : %.2f \n", nomeCidade2, densidade2);

    if (densidade1 > densidade2)
    {
      printf("Resultado: Cidade 1 %s venceu.\n", nomeCidade1);
    }
    else if (densidade1 == densidade2)
    {
      printf("EMPATE! - As cidades tem o densidade demografica igual.\n");
    }
    else
    {
      printf("Resultado: Cidade 2 %s venceu.\n", nomeCidade2);
    }
    break;
  default:
    printf("Opção Inválida!\n");
  }

  return 0;
}