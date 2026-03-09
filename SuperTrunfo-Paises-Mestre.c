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


     int atributo1, atributo2;

    float valor1_carta1 = 0;
    float valor1_carta2 = 0;

    float valor2_carta1 = 0;
    float valor2_carta2 = 0;

    float soma1, soma2;

    char nomeAtributo1[30];
    char nomeAtributo2[30];
    
    // -------- MENU 1 --------
    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo1);

    // -------- MENU 2 --------
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo2);

    // Verifica se escolheu o mesmo atributo
    if(atributo1 == atributo2) {
        printf("\nErro: voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // -------- SWITCH ATRIBUTO 1 --------
    switch(atributo1) {

        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            sprintf(nomeAtributo1, "Populacao");
        break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            sprintf(nomeAtributo1, "Area");
        break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
        break;

        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            sprintf(nomeAtributo1, "Pontos Turisticos");
        break;

        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade Demografica");
        break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // -------- SWITCH ATRIBUTO 2 --------
    switch(atributo2) {

        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            sprintf(nomeAtributo2, "Populacao");
        break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            sprintf(nomeAtributo2, "Area");
        break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
        break;

        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            sprintf(nomeAtributo2, "Pontos Turisticos");
        break;

        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade Demografica");
        break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // -------- REGRA DA DENSIDADE --------
    if(atributo1 == 5) {
        valor1_carta1 = 1 / valor1_carta1;
        valor1_carta2 = 1 / valor1_carta2;
    }

    if(atributo2 == 5) {
        valor2_carta1 = 1 / valor2_carta1;
        valor2_carta2 = 1 / valor2_carta2;
    }

    // -------- SOMA DOS ATRIBUTOS --------
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // -------- RESULTADOS --------
    printf("\n=== RESULTADO ===\n\n");

    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n\n", pais2);

    printf("Atributo 1: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", pais1, valor1_carta1);
    printf("%s: %.2f\n\n", pais2, valor1_carta2);

    printf("Atributo 2: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", pais1, valor2_carta1);
    printf("%s: %.2f\n\n", pais2, valor2_carta2);

    printf("Soma %s: %.2f\n", pais1, soma1);
    printf("Soma %s: %.2f\n\n", pais2, soma2);

    // -------- OPERADOR TERNARIO --------
    (soma1 > soma2) ? printf("Vencedor: %s\n", pais1) :
    (soma2 > soma1) ? printf("Vencedor: %s\n", pais2) :
    printf("Empate!\n");

    return 0;
}