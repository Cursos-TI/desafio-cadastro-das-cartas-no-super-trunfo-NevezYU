#include <stdio.h>
#include <string.h> // Necessário para usar strcpy e strcat

int main()
{
    printf("Desafio das Cartas!\n");

    // Declaração das variáveis das duas cartas
    char estado1[20], estado2[25];       // Estados das cartas
    char codigo1[5], codigo2[5];         // Códigos identificadores (ex: A01, B03)
    char cidade1[50], cidade2[50];       // Nomes das cidades
    int populacao1, populacao2;          // População de cada cidade
    float area1, area2;                  // Área em km²
    float pib1, pib2;                    // PIB em bilhões
    int pontos1, pontos2;                // Número de pontos turísticos

    char Msg2[50], Msg[50];              // Msg2: mensagem final de vitória | Msg: comparação de área

    // ----------- Entrada de dados da carta 1 -----------

    printf("    Carta 1   \n");

    printf("Estado:");
    scanf(" %s", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n");

    // ----------- Entrada de dados da carta 2 -----------

    printf("   Carta 2   \n");

    printf("Estado:");
    scanf(" %s", &estado2); 

    printf("Código (ex: B03): ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // ----------- Cálculos de densidade e PIB per capita -----------

    float densidade_Popu1 = populacao1 / area1;
    float densidade_Popu2 = populacao2 / area2;

    float PIBPopu1 = pib1 / populacao1;
    float PIBPopu2 = pib2 / populacao2;

    // ----------- Comparação de área -----------

    if (area1 > area2)
    {
        strcpy(Msg, "área da carta 1 é maior que área da carta 2");
    }
    else
    {
        strcpy(Msg, "área da carta 2 é maior que área da carta 1");
    }

    // ----------- Lógica para definir quem venceu -----------

    if (populacao1 < populacao2 && area1 < area2 && pib1 < pib2 && pontos1 < pontos2)
    {
        // Carta 2 venceu em todos os critérios
        strcpy(Msg2, "Carta 2 venceu! ");
        strcat(Msg2, cidade2);  // Adiciona o nome da cidade
    }
    if (populacao1 > populacao2 && area1 > area2 && pib1 > pib2 && pontos1 > pontos2)
    {
        // Carta 1 venceu em todos os critérios
        strcpy(Msg2, "Carta 1 venceu! ");
        strcat(Msg2, cidade1);
    }
    if (populacao1 == populacao2 && area1 == area2 && pib1 == pib2 && pontos1 == pontos2)
    {
        // Empate total
        strcpy(Msg2, "Empate");
    }

    // ----------- Exibe resultado da comparação -----------

    printf("%s", Msg2);  // Mensagem de vitória ou empate
    printf("\n\n\n");

    // ----------- Exibe os dados detalhados das cartas -----------

    printf("   Informações das Cartas   \n");

    printf("Carta: 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %0.3f km\n", area1);
    printf("PIB: %0.3f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional da carta 1 é: %f\n", densidade_Popu1);
    printf("PIB por pessoa é: %f\n", PIBPopu1);

    printf("\n\n");

    printf("Carta: 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %0.3f km\n", area2);
    printf("PIB: %0.3f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional da carta 2 é: %f\n", densidade_Popu2);
    printf("PIB por pessoa é: %.0f\n", PIBPopu2);  // sem casas decimais

    printf("\n\n");

    // Comparação de área
    printf("%s\n", Msg);

    // Resumo das cartas
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, populacao2);

    // Resultado da vitória
    printf("%s", Msg2);

    return 0;
}
