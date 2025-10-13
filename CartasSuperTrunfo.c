#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Dados da Carta 1
    char estado1[] = "RJ";
    char codigo1[] = "R1";
    char nome1[] = "Rio de Janeiro";
    unsigned long int populacao1 = 19879174;
    float area1 = 43696.0;
    float pib1 = 1153512000.0;
    int pontos1 = 150;
    float densidade1;  

    // Dados da Carta 2
    char estado2[] = "SP";
    char codigo2[] = "S2";
    char nome2[] = "São Paulo";
    unsigned long int populacao2 = 16055175;
    float area2 = 43697.0;
    float pib2 = 1765512000.0;
    int pontos2 = 149;
    float densidade2;  

    // Cálculos de densidade
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // Exibição das cartas
    printf("----------------------------------------\n");
    printf("--- Carta 1 ---\n");
    printf("Sigla: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bi R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("--- Carta 2 ---\n");
    printf("Sigla: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("----------------------------------------\n\n");

    int atributo1_escolhido = 0;
    int atributo2_escolhido = 0;

    // Escolha do primeiro atributo
    while (atributo1_escolhido < 1 || atributo1_escolhido > 5) {
        printf("Escolha o PRIMEIRO atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &atributo1_escolhido);

        if (atributo1_escolhido < 1 || atributo1_escolhido > 5) {
            printf("Opção inválida. Escolha um número de 1 a 5.\n\n");
        }
    }

    // Escolha do segundo atributo (diferente do primeiro)
    while (atributo2_escolhido < 1 || atributo2_escolhido > 5 || atributo2_escolhido == atributo1_escolhido) {
        printf("\nEscolha o SEGUNDO atributo para comparação (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i != atributo1_escolhido) { // Mostra apenas as opções restantes
                switch (i) {
                    case 1: printf("%d. População\n", i); break;
                    case 2: printf("%d. Área\n", i); break;
                    case 3: printf("%d. PIB\n", i); break;
                    case 4: printf("%d. Pontos Turísticos\n", i); break;
                    case 5: printf("%d. Densidade Demográfica\n", i); break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &atributo2_escolhido);

        if (atributo2_escolhido < 1 || atributo2_escolhido > 5 || atributo2_escolhido == atributo1_escolhido) {
            printf("Opção inválida ou atributo já escolhido. Selecione uma opção válida e diferente.\n\n");
        }
    }

    printf("----------------------------------------\n\n");

    // Valores dos atributos para Carta 1
    float val1_c1_attr1, val1_c1_attr2;
    switch (atributo1_escolhido) {
        case 1: val1_c1_attr1 = (float)populacao1; break;
        case 2: val1_c1_attr1 = area1; break;
        case 3: val1_c1_attr1 = pib1; break;
        case 4: val1_c1_attr1 = (float)pontos1; break;
        case 5: val1_c1_attr1 = densidade1; break;
    }
    switch (atributo2_escolhido) {
        case 1: val1_c1_attr2 = (float)populacao1; break;
        case 2: val1_c1_attr2 = area1; break;
        case 3: val1_c1_attr2 = pib1; break;
        case 4: val1_c1_attr2 = (float)pontos1; break;
        case 5: val1_c1_attr2 = densidade1; break;
    }

    // Valores dos atributos para Carta 2
    float val1_c2_attr1, val1_c2_attr2;
    switch (atributo1_escolhido) {
        case 1: val1_c2_attr1 = (float)populacao2; break;
        case 2: val1_c2_attr1 = area2; break;
        case 3: val1_c2_attr1 = pib2; break;
        case 4: val1_c2_attr1 = (float)pontos2; break;
        case 5: val1_c2_attr1 = densidade2; break;
    }
    switch (atributo2_escolhido) {
        case 1: val1_c2_attr2 = (float)populacao2; break;
        case 2: val1_c2_attr2 = area2; break;
        case 3: val1_c2_attr2 = pib2; break;
        case 4: val1_c2_attr2 = (float)pontos2; break;
        case 5: val1_c2_attr2 = densidade2; break;
    }

    // Comparação e soma de pontos
    float pontos_c1 = 0.0;
    float pontos_c2 = 0.0;

    // Atributo 1
    printf("Atributo 1: ");
    switch (atributo1_escolhido) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("  %s: %.2f | %s: %.2f\n", nome1, val1_c1_attr1, nome2, val1_c2_attr1);
    
    if (atributo1_escolhido == 5) { // Densidade Demográfica (menor valor vence)
        pontos_c1 += (val1_c1_attr1 < val1_c2_attr1) ? 1 : 0;
        pontos_c2 += (val1_c2_attr1 < val1_c1_attr1) ? 1 : 0;
    } else { // Outros atributos (maior valor vence)
        pontos_c1 += (val1_c1_attr1 > val1_c2_attr1) ? 1 : 0;
        pontos_c2 += (val1_c2_attr1 > val1_c1_attr1) ? 1 : 0;
    }

    // Atributo 2
    printf("Atributo 2: ");
    switch (atributo2_escolhido) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("  %s: %.2f | %s: %.2f\n", nome1, val1_c1_attr2, nome2, val1_c2_attr2);

    if (atributo2_escolhido == 5) { // Densidade Demográfica (menor valor vence)
        pontos_c1 += (val1_c1_attr2 < val1_c2_attr2) ? 1 : 0;
        pontos_c2 += (val1_c2_attr2 < val1_c1_attr2) ? 1 : 0;
    } else { // Outros atributos (maior valor vence)
        pontos_c1 += (val1_c1_attr2 > val1_c2_attr2) ? 1 : 0;
        pontos_c2 += (val1_c2_attr2 > val1_c1_attr2) ? 1 : 0;
    }

    printf("\n--- Resultado da Rodada ---\n");
    printf("Pontos de %s: %.0f\n", nome1, pontos_c1);
    printf("Pontos de %s: %.0f\n", nome2, pontos_c2);

    if (pontos_c1 > pontos_c2) {
        printf("\n%s venceu a rodada!\n", nome1);
    } else if (pontos_c2 > pontos_c1) {
        printf("\n%s venceu a rodada!\n", nome2);
    } else {
        printf("\nHouve Empate!\n");
    }

    printf("----------------------------------------\n");

    return 0;
}
