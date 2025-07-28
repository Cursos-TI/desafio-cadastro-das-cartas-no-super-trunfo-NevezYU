#include <stdio.h>

int main () {
    printf("Desafio das Cartas!\n");
    
    char estado1[20] = "55", estado2[25] = "55";
    char codigo1[5] = "55", codigo2[5] = "55";
    char cidade1[50] = "FF", cidade2[50] = "G";
    int populacao1 = 100, populacao2 = 100;
    float area1 = 100, area2 = 100;
    float pib1 = 100, pib2 = 100;
    int pontos1 = 5, pontos2 = 5;
    char Msg2[50] = "", Msg[50] = "" ;

    // printf("    Carta 1   \n");
    // printf("Estado:");
    // scanf(" %s", &estado1);

    // printf("Código (ex: A01): ");
    // scanf("%s", codigo1);

    // printf("Nome da cidade: ");
    // scanf(" %s", cidade1);

    // printf("População: ");
    // scanf("%d", &populacao1);

    // printf("Área (km²): ");
    // scanf("%f", &area1);

    // printf("PIB: ");
    // scanf("%f", &pib1);

    // printf("Número de pontos turísticos: ");
    // scanf("%d", &pontos1);

    // printf("\n");

    // printf("   Carta 2   \n");
    // printf("Estado:");
    // scanf(" %s", &estado2);

    // printf("Código (ex: B03): ");
    // scanf("%s", codigo2);

    // printf("Nome da cidade: ");
    // scanf(" %s", cidade2);

    // printf("População: ");
    // scanf("%d", &populacao2);

    // printf("Área (km²): ");
    // scanf("%f", &area2);

    // printf("PIB (em bilhões): ");
    // scanf("%f", &pib2);

    // printf("Número de pontos turísticos: ");
    // scanf("%d", &pontos2);

    float densidade_Popu1 =0 ;
    densidade_Popu1 = populacao1 / area1;
    
    float densidade_Popu2 =0;
    densidade_Popu2 = populacao2 / area2;

    float PIBPopu1 = 0;
    PIBPopu1 = pib1 / populacao1;
    float PIBPopu2 = 0;
    PIBPopu2 = pib2 / populacao2;



    if (area1 > area2 ) {
    Msg[50] = "area1 é maior que area2";
        
    }else {
        Msg[50] = "area2 é maior que area1";

    }
    if (populacao1 < populacao2 && area1 < area2 && pib1 < pib2 && pontos1 < pontos2) {
    strcpy (Msg2, "Carta 2 venceu");
    }
    if (populacao1 > populacao2 && area1 > area2 && pib1 > pib2 && pontos1 > pontos2) {
        strcpy (Msg2, "Carta 1 venceu");
    }

    if (populacao1 == populacao2 && area1 == area2 && pib1 == pib2 && pontos1 == pontos2) { 
        strcpy(Msg2, "Empate");
    }

printf("%s",Msg2);
    printf("\n\n\n");

    printf("   Informações das Cartas   \n");

    printf("Carta: 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional da carta 1 é: %f\n", densidade_Popu1 );
    printf("PIB por pessoa é: %f\n", PIBPopu1);

    printf("\n\n");
    printf("Carta: 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional da carta 2 é: %f\n", densidade_Popu2);
    printf("PIB por pessoa é: %.0f\n", PIBPopu2);
    printf("\n\n");


    printf("%s",Msg2);
    return 0;
}