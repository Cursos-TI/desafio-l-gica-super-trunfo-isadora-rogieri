#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Cadastro das cartas
// Objetivo: No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

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

  // ===== ESCOLHA DOS ATRIBUTOS =====
  int opcao1, opcao2;

  printf("\n===== ESCOLHA O PRIMEIRO ATRIBUTO =====\n");
  printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n");
  scanf("%d", &opcao1);

  printf("\n===== ESCOLHA O SEGUNDO ATRIBUTO =====\n");

  opcao1 != 1 ? printf("1 - Populacao\n") : "";
  opcao1 != 2 ? printf("2 - Area\n") : "";
  opcao1 != 3 ? printf("3 - PIB\n") : "";
  opcao1 != 4 ? printf("4 - Pontos Turisticos\n") : "";
  opcao1 != 5 ? printf("5 - Densidade\n") : "";

  scanf("%d", &opcao2);

  if (opcao1 == opcao2)
  {
    printf("Erro: voce escolheu o mesmo atributo duas vezes!\n");
    return 0;
  }

  // ===== CAPTURA DOS VALORES =====
  float valor1_cidade1, valor1_cidade2;
  float valor2_cidade1, valor2_cidade2;

  switch (opcao1)
  {
  case 1:
    valor1_cidade1 = populacao1;
    valor1_cidade2 = populacao2;
    break;
  case 2:
    valor1_cidade1 = area1;
    valor1_cidade2 = area2;
    break;
  case 3:
    valor1_cidade1 = pib1;
    valor1_cidade2 = pib2;
    break;
  case 4:
    valor1_cidade1 = nPontosTuristicos1;
    valor1_cidade2 = nPontosTuristicos2;
    break;
  case 5:
    valor1_cidade1 = densidade1;
    valor1_cidade2 = densidade2;
    break;
  default:
    printf("Opcao invalida\n");
    return 0;
  }

  switch (opcao2)
  {
  case 1:
    valor2_cidade1 = populacao1;
    valor2_cidade2 = populacao2;
    break;
  case 2:
    valor2_cidade1 = area1;
    valor2_cidade2 = area2;
    break;
  case 3:
    valor2_cidade1 = pib1;
    valor2_cidade2 = pib2;
    break;
  case 4:
    valor2_cidade1 = nPontosTuristicos1;
    valor2_cidade2 = nPontosTuristicos2;
    break;
  case 5:
    valor2_cidade1 = densidade1;
    valor2_cidade2 = densidade2;
    break;
  }

  // ===== REGRA DA DENSIDADE =====
  if (opcao1 == 5)
  {
    valor1_cidade1 = 1 / valor1_cidade1;
    valor1_cidade2 = 1 / valor1_cidade2;
  }

  if (opcao2 == 5)
  {
    valor2_cidade1 = 1 / valor2_cidade1;
    valor2_cidade2 = 1 / valor2_cidade2;
  }

  // ===== SOMA =====
  float soma1 = valor1_cidade1 + valor2_cidade1;
  float soma2 = valor1_cidade2 + valor2_cidade2;

  // ===== RESULTADO =====
  printf("\n===== RESULTADO FINAL =====\n");

  printf("%s: %.2f\n", nomeCidade1, soma1);
  printf("%s: %.2f\n", nomeCidade2, soma2);

  if (soma1 == soma2)
  {
    printf("Empate!\n");
  }
  else
  {
    printf("Vencedor: %s\n", soma1 > soma2 ? nomeCidade1 : nomeCidade2);
  }

  return 0;
}
