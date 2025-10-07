#include <stdio.h>

int main(){

  // --- CARTA 1: DECLARAÇÃO DE VARIÁVEIS ---
  char estado[5];
  char codigo[5];
  char nome[50];
  unsigned long int populacao; // REQUISITO: Alterado para unsigned long int
  float area;
  float pib;
  int pontos;
  float densidade; 
  float capita;    

  // --- CARTA 2: DECLARAÇÃO DE VARIÁVEIS ---
  char estado2[5];
  char codigo2[5];
  char nome2[50];
  unsigned long int populacao2; // REQUISITO: Alterado para unsigned long int
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float capita2;

  // --- CADASTRO DA CARTA 1 ---
  printf("--- Cadastro da Carta 1 ---\n");
  printf("Digite a sigla do estado: ");
  scanf(" %s", estado);

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
  scanf(" %s", estado2);

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


  // Cálculos da Carta 2
  densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
  capita2 = (populacao2 > 0) ? pib2 / (float)populacao2 : 0;


  // EXIBIÇÃO DOS DADOS DAS CARTAS
  printf("----------------------------------------\n");
  printf("--- Dados Consolidados Carta 1 ---\n");
  printf("Sigla: %s\n", estado);
  printf("Nome: %s\n", nome);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bi R$\n", pib);
  printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);
  printf("PIB per Capita: %.2f RS\n", capita);

  printf("--- Dados Consolidados Carta 2 ---\n");
  printf("Sigla: %s\n", estado2);
  printf("Nome: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bi R$\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f R$\n", capita2);
  printf("----------------------------------------\n\n");

// Comparação
  printf("Comparação de cartas (Atributo: PIB per capita):\n");
  printf("Carta 1-%s: %.2f R$\n", nome, capita);
  printf("Carta 2-%s: %.2f R$\n", nome2, capita2);
    if (capita > capita2){
    printf("Resultado: Carta 1 (%s) venceu \n", nome);
  } else if(capita2 > capita){
    printf("Resultado: Carta 2 (%s) venceu \n", nome2);
  } else {
    printf("Houve um empate no PIB per Capita \n");
  }
  printf("----------------------------------------\n\n");
  

  return 0;
}