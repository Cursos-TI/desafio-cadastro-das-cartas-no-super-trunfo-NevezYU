#include <stdio.h>
  #include <locale.h>
int main(void) {
     setlocale(LC_ALL, "pt_BR.UTF-8");
    // Dados da Carta 1
    char  estado1[3]   ;
    char  codigo1[3]   ;
    char  cidade1[50] ;
    int   populacao1   ;
    float area1        ;
    float pib1         ; // unidades livres (ex.: milhões)
    int   pontos1    ;

    // Carta 2
    char  estado2[3] ;
    char  codigo2[3]  ;
    char  cidade2[50] ;
    int   populacao2  ;
    float area2       ;
    float pib2        ;
    int   pontos2     ;


    printf("    Carta 1   \n");

    printf("Estado: ");
    scanf(" %s", estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n");

    // Entrada de dados da carta 2
    printf("    Carta 2   \n");

    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibpc1 = pib1 / (float)populacao1;
    float pibpc2 = pib2 / (float)populacao2;

    // Escolha dos atributos
    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade demográfica\n");
    if (escolha1 != 6) printf("6 - PIB per capita\n");
    scanf("%d", &escolha2);

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pibpc1; valor1_c2 = pibpc2; break;
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pibpc1; valor2_c2 = pibpc2; break;
    }

    // Soma e resultado
    
float dif1 = valor1_c1 - valor1_c2;
float dif2 = valor2_c1 - valor2_c2;

int venceu1 = (dif1 > 0.0f) ? 1 : (dif1 < 0.0f ? 2 : 0); 
int venceu2 = (dif2 > 0.0f) ? 1 : (dif2 < 0.0f ? 2 : 0);

  const char* label1 = (escolha1==1)?"Populacao":
                         (escolha1==2)?"Area":
                         (escolha1==3)?"PIB":
                         (escolha1==4)?"Pontos Turisticos":
                         (escolha1==5)?"Densidade Populacional":
                         "PIB per Capita";

    const char* label2 = (escolha2==1)?"Populacao":
                         (escolha2==2)?"Area":
                         (escolha2==3)?"PIB":
                         (escolha2==4)?"Pontos Turisticos":
                         (escolha2==5)?"Densidade Populacional":
                         "PIB per Capita";
  
// Resultado do primeiro atributo
if (venceu1 == 1)
    printf("%s: Carta 1 (%s) - diferença: %.1f\n",
           label1, estado1, (dif1 >= 0.0f ? dif1 : -dif1));
else if (venceu1 == 2)
    printf("%s: Carta 2 (%s) - diferença: %.1f\n",
           label1, estado2, (dif1 >= 0.0f ? dif1 : -dif1));
else
    printf("%s: Empate - diferença: %.1f\n",
           label1, (dif1 >= 0.0f ? dif1 : -dif1));

// Resultado do segundo atributo
if (venceu2 == 1)
    printf("%s: Carta 1 (%s) - diferença: %.1f\n",
           label2, estado1, (dif2 >= 0.0f ? dif2 : -dif2));
else if (venceu2 == 2)
    printf("%s: Carta 2 (%s) - diferença: %.1f\n",
           label2, estado2, (dif2 >= 0.0f ? dif2 : -dif2));
else
    printf("%s: Empate - diferença: %.1f\n",
           label2, (dif2 >= 0.0f ? dif2 : -dif2));


    return 0;
}