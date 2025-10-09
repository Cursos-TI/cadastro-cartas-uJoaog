#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int atributo;
  
  // --- CARTA 1: DECLARAÇÃO DE VARIÁVEIS PRÉ-DEFINIDAS ---
  char estado[] = "RJ";
  char codigo[] = "R1";
  char nome[] = "Rio de Janeiro";
  unsigned long int populacao = 16055174;
  float area = 43696;
  float pib = 1153512000;
  int pontos = 150;
  float densidade;  

  // --- CARTA 2: DECLARAÇÃO DE VARIÁVEIS PRÉ-DEFINIDAS ---
  char estado2[] = "SP";
  char codigo2[] = "S2";
  char nome2[] = "São Paulo";
  unsigned long int populacao2 = 16055175;
  float area2 = 43697;
  float pib2 = 1153512000;
  int pontos2 = 149;
  float densidade2;  

  
  // --- CÁLCULOS DOS ATRIBUTOS DERIVADOS ---

  // Cálculos da Carta 1
  densidade = (area > 0) ? (float)populacao / area : 0;
  // Cálculos da Carta 2
  densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // EXIBIÇÃO DOS DADOS DAS CARTAS
  printf("----------------------------------------\n");
  printf("--- Dados Consolidados Carta 1 ---\n");
  printf("Sigla: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome: %s\n", nome);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bi R$\n", pib);
  printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);

  printf("--- Dados Consolidados Carta 2 ---\n");
  printf("Sigla: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bi R$\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("----------------------------------------\n\n");

// Menu de Comparação
  printf("Comparação de cartas :\n");
  printf("Atributos:\n");
  printf("1 População\n");
  printf("2 Área\n");
  printf("3 PIB\n");
  printf("4 Número de pontos turísticos\n");
  printf("5 Densidade demográfica\n");
  printf("Escolha o atributo a ser comparado:\n");
  scanf("%d", &atributo);
  printf("----------------------------------------\n\n");


  switch (atributo){
    case 1:
        printf("Atributo Escolhido: População \n" );
        if (populacao > populacao2) {
        printf("A carta 2 venceu com %lu habitantes\n", populacao);
        } else if (populacao2 > populacao) {
        printf("A carta 2 venceu com %lu habitantes\n", populacao2);
        } else {
        printf("Houve Empate\n");
    }
        break;

    case 2:
            printf("Atributo Escolhido: Área\n" );
        if (area > area2) {
        printf("A carta 1 venceu com %.2f km²\n", area);
        } else if (area2 > area) {
        printf("A carta 2 venceu com %.2f km²\n", area2);
        } else {
        printf("Houve Empate\n");
        }
        break;

    case 3:
        printf("Atributo Escolhido: PIB \n" );
        if (pib > pib2) {
        printf("A carta 1 venceu com %.2f bi R$\n", pib);
    } else if (pib2 > pib) {
        printf("A carta 2 venceu com %.2f bi R$\n", pib2);
    } else {
        printf("Houve Empate\n");
    }
        break;

    case 4:
        printf("Atributo Escolhido: Pontos Turísticos\n" );
        if (pontos > pontos2) {
        printf("A carta 1 venceu com %d pontos\n", pontos);
    } else if (pontos2 > pontos) {
        printf("A carta 2 venceu com %d pontos\n", pontos2);
    } else {
        printf("Houve Empate\n");
    }
        break;

    case 5:
        printf("Atributo Escolhido: Densidade Demográfica\n" );
        if (densidade > densidade2){
        printf("A Carta 1 venceu com %.2f hab/km²\n", densidade);
    } else if (densidade2 > densidade) {
        printf("A carta 2 venceu com %.2f hab/km²\n", densidade2);
    } else {
        printf("Houve Empate\n");
    }
        break;

    default:
    printf("Opção invalida. Por favor, escolha um número de 1 a 5.\n");
        break;
    }

  printf("----------------------------------------\n\n");
  
  return 0;
}