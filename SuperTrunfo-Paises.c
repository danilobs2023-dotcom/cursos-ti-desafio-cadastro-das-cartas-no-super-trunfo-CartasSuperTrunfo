#include <stdio.h>

int main() {

    // ---------------- CARTA 1 ----------------
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1 = populacao1 / area1;

    // ---------------- CARTA 2 ----------------
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2 = populacao2 / area2;

    int opcao;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");

    printf("pais1: ");
    scanf("%s", pais1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("Cadastro da Carta 2\n");

    printf("pais2: ");
    scanf("%s", pais2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ---------------- MENU ----------------
    printf("==== SUPER TRUNFO - COMPARACAO DE PAISES ====\n\n");

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s\n\n", pais1, pais2);

    // ---------------- SWITCH ----------------
    switch(opcao) {

        case 1:

            printf("Atributo escolhido: Populacao\n\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            if(populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else {
                if(populacao2 > populacao1) {
                    printf("Resultado: %s venceu!\n", pais2);
                }
                else {
                    printf("Resultado: Empate!\n");
                }
            }

        break;

        case 2:

            printf("Atributo escolhido: Area\n\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n\n", pais2, area2);

            if(area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else {
                if(area2 > area1) {
                    printf("Resultado: %s venceu!\n", pais2);
                }
                else {
                    printf("Resultado: Empate!\n");
                }
            }

        break;

        case 3:

            printf("Atributo escolhido: PIB\n\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);

            if(pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else {
                if(pib2 > pib1) {
                    printf("Resultado: %s venceu!\n", pais2);
                }
                else {
                    printf("Resultado: Empate!\n");
                }
            }

        break;

        case 4:

            printf("Atributo escolhido: Pontos Turisticos\n\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n\n", pais2, pontos2);

            if(pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else {
                if(pontos2 > pontos1) {
                    printf("Resultado: %s venceu!\n", pais2);
                }
                else {
                    printf("Resultado: Empate!\n");
                }
            }

        break;

        case 5:

            printf("Atributo escolhido: Densidade Demografica\n\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n\n", pais2, densidade2);

            // Regra invertida: menor vence
            if(densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else {
                if(densidade2 < densidade1) {
                    printf("Resultado: %s venceu!\n", pais2);
                }
                else {
                    printf("Resultado: Empate!\n");
                }
            }

        break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");

    }

    return 0;
}