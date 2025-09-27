#include <stdio.h>

int main(){

  // --- CARTA 1: DECLARAÇÃO DE VARIÁVEIS ---
  char estado;
  char codigo[5];
  char nome[50];
  unsigned long int populacao;
  float area;
  float pib;
  int pontos;
  float densidade; 
  float capita;    
  float super_poder; // REQUISITO: Nova variável para o Super Poder

  // --- CARTA 2: DECLARAÇÃO DE VARIÁVEIS ---
  char estado2;
  char codigo2[5];
  char nome2[50];
  unsigned long int populacao2; 
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float capita2;
  float super_poder2; // REQUISITO: Nova variável para o Super Poder

  // --- CADASTRO DA CARTA 1 ---
  printf("--- Cadastro da Carta 1 ---\n");
  printf("Digite a sigla do estado: ");
  scanf(" %c", &estado);

  printf("Digite o código da cidade: ");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome);

  printf("Digite a população: ");
  scanf("%lu", &populacao); 

  printf("Digite a área (em km²): ");
  scanf("%f", &area);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos);
  printf("Cadastro da Carta 1 Concluído!\n\n");

  // --- CADASTRO DA CARTA 2 ---
  printf("--- Cadastro da Carta 2 ---\n");
  printf("Digite a sigla do estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da cidade: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome2);

  printf("Digite a população: ");
  scanf("%lu", &populacao2); 

  printf("Digite a área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos2);
  printf("Cadastro da Carta 2 Concluído!\n\n");

  // --- CÁLCULOS DOS ATRIBUTOS DERIVADOS ---

  // Cálculos da Carta 1
  densidade = (area > 0) ? (float)populacao / area : 0;
  capita = (populacao > 0) ? pib / (float)populacao : 0;
  
  // REQUISITO: Cálculo do Super Poder 1
  float inverso_densidade = (densidade > 0) ? 1.0f / densidade : 0;
  super_poder = (float)populacao + area + pib + (float)pontos + capita + inverso_densidade;

  // Cálculos da Carta 2
  densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
  capita2 = (populacao2 > 0) ? pib2 / (float)populacao2 : 0;

  // REQUISITO: Cálculo do Super Poder 2
  float inverso_densidade2 = (densidade2 > 0) ? 1.0f / densidade2 : 0;
  super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + capita2 + inverso_densidade2;

  // EXIBIÇÃO DOS DADOS DAS CARTAS
  printf("----------------------------------------\n");
  printf("--- Dados Consolidados Carta 1 ---\n");
  printf("Nome: %s\n", nome);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bi\n", pib);
  printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);
  printf("PIB per Capita: %.2f\n", capita);
  printf("Super Poder: %.2f\n\n", super_poder);

  printf("--- Dados Consolidados Carta 2 ---\n");
  printf("Nome: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bi\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f\n", capita2);
  printf("Super Poder: %.2f\n\n", super_poder2);
  printf("----------------------------------------\n\n");

  // ---COMPARAÇÃO E EXIBIÇÃO DOS RESULTADOS DA BATALHA ---
  printf("--- Batalha de Cartas: Resultados ---\n");

  // População: maior vence
  int vitoria_pop = populacao > populacao2;
  printf("População: Carta %d venceu (%d)\n", (vitoria_pop ? 1 : 2), vitoria_pop);

  // Área: maior vence
  int vitoria_area = area > area2;
  printf("Área: Carta %d venceu (%d)\n", (vitoria_area ? 1 : 2), vitoria_area);

  // PIB: maior vence
  int vitoria_pib = pib > pib2;
  printf("PIB: Carta %d venceu (%d)\n", (vitoria_pib ? 1 : 2), vitoria_pib);

  // Pontos Turísticos: maior vence
  int vitoria_pontos = pontos > pontos2;
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (vitoria_pontos ? 1 : 2), vitoria_pontos);

  // Densidade Populacional: MENOR vence
  int vitoria_densidade = densidade < densidade2;
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (vitoria_densidade ? 1 : 2), vitoria_densidade);

  // PIB per Capita: maior vence
  int vitoria_capita = capita > capita2;
  printf("PIB per Capita: Carta %d venceu (%d)\n", (vitoria_capita ? 1 : 2), vitoria_capita);

  // Super Poder: maior vence
  int vitoria_super_poder = super_poder > super_poder2;
  printf("Super Poder: Carta %d venceu (%d)\n", (vitoria_super_poder ? 1 : 2), vitoria_super_poder);

  return 0;

}