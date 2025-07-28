#include <stdio.h>

int main()
{
    printf("Desafio das Cartas!\n");

    char estado1[20] = "ce", estado2[25] = "pe";
    char codigo1[5] = "85", codigo2[5] = "86";
    char cidade1[50] = "fortaleza", cidade2[50] ="campinas";
    int populacao1 = 10000, populacao2 = 20000;
    float area1 = 5000, area2 = 10000;
    float pib1 = 11000, pib2 = 22000;
    int pontos1 = 3 , pontos2 = 6;
    char Msg2[50], Msg[50];

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

    float densidade_Popu1 = 0;
    densidade_Popu1 = populacao1 / area1;

    float densidade_Popu2 = 0;
    densidade_Popu2 = populacao2 / area2;

    float PIBPopu1 = 0;
    PIBPopu1 = pib1 / populacao1;
    float PIBPopu2 = 0;
    PIBPopu2 = pib2 / populacao2;

    if (area1 > area2)
    {
        strcpy(Msg, "area1 é maior que area2");
    }
    else
    {
        strcpy(Msg, "area2 é maior que area1");
    }
    if (populacao1 < populacao2 && area1 < area2 && pib1 < pib2 && pontos1 < pontos2)
    {
        strcpy(Msg2, "Carta 2 %s venceu",cidade2 );
    }
    if (populacao1 > populacao2 && area1 > area2 && pib1 > pib2 && pontos1 > pontos2)
    {
        strcpy(Msg2, "Carta 1 %s venceu!  pupolação: %d", cidade1, populacao1);
    }

    if (populacao1 == populacao2 && area1 == area2 && pib1 == pib2 && pontos1 == pontos2)
    {
        strcpy(Msg2, "Empate");
    }

    printf("%s", Msg2);
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
    printf("Densidade populacional da carta 1 é: %f\n", densidade_Popu1);
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

    printf("%s\n", Msg);
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, populacao2);


    printf("%s", Msg2);
 
    return 0;
}