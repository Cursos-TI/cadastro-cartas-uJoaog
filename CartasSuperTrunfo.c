#include <stdio.h>


int main(){

  // Declaração de Variaveis da carta 1
  char estado;
  char codigo[5];
  char nome[50];
  int populacao;
  float area;
  float pib;
  int pontos;

//Declaração de Variaveis da carta 2
  char estado2;
  char codigo2[5];
  char nome2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  //Cadastro da Carta 1

  printf("Cadastro da Carta 1 \n");
  printf("Digite o estado: \n");
  scanf(" %c", &estado);

  printf("Digite o código: \n");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nome);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a Área: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite os pontos turísticos: \n");
  scanf("%d", &pontos);
  printf("Cadastro da Carta 1 Concluido \n");

//Cadastro da carta 2

  printf("Cadastro da Carta 2 \n");
  printf("Digite o estado: \n");
  scanf(" %c", &estado2);

  printf("Digite o código: \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nome2);

  printf("Digite a população: \n");
  scanf("%d", &populacao2);

  printf("Digite a Área: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Digite os pontos turísticos: \n");
  scanf("%d", &pontos2);
  printf("Cadastro da Carta 2 Concluido \n");


//Exibição dos dados das cartas:
  //Carta 1

  printf("Dados Carta 1 \n");

  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigo);
  printf("Nome da Cidade: %s \n", nome);
  printf("População: %d \n", populacao);
  printf("Área: %.2f \n", area);
  printf("PIB: %.2f \n", pib);
  printf("Número de Pontos Turísticos: %d \n", pontos );

  //carta 2
  printf("Dados Carta 2 \n");

  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nome2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontos2);


return 0;
} 
