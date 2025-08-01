#include <stdio.h>

int main(){
    // Declaração de variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração de variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;



    // Instruções e entrada dos dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // Instruções e entrada dos dados da carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Informe o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);    




     //Cálculos Densidade Populacional e Pir per Capita para Carta 1
     // 0.0f Verifica se a área não é zero
    densidadePopulacional1 = (area1 > 0.0f)? populacao1 / area1 :0.0f;
    pibPerCapita1 = (populacao1 > 0.0f)? (pib1 * 1000000000.0f) / populacao1: 0.0f; // PIB está em bilhões


     // Cálculos Densidade Populacional e Pir per Capita para Carta 2
     // 0.0f Verifica se a área não é zero
    densidadePopulacional2 = (area2 > 0.0f)? populacao2 / area2 :0.0f;
    pibPerCapita2 = (populacao2 > 0.0f)? (pib2 * 1000000000.0f) / populacao2: 0.0f; // PIB está em bilhões




    //Informações para calculo Super Poder Carta 1
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + ((densidadePopulacional1 > 0.0f) ? (1.0f / densidadePopulacional1) : 0.0f);

    
    //Informações para calculo Super Poder Carta 2
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + ((densidadePopulacional2 > 0.0f) ? (1.0f / densidadePopulacional2) : 0.0f);

    // Comparações Carta 1  e Carta 2
    int populacao = (populacao1 > populacao2);
    int area = (area1 > area2);
    int pib = (pib1 > pib2);
    int pontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    // MENOR vence
    int densidadePopulacional = (densidadePopulacional1 < densidadePopulacional2);
    int pibPerCapita = (pibPerCapita1 > pibPerCapita2);
    int superPoder = (superPoder1 > superPoder2);



    // Exibição das informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super poder da carta 1: %.2f", superPoder1);



    // Exibição das informações da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super poder da carta 2: %.2f\n", superPoder2);

    //Impressão carta vencedora
    printf("\nPopulação:Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Area:Carta %d venceu\n", (area1 > area2) ? 1: 2);
    printf("Pib:Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos turisticos:Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);
    printf("Densidade Populacional:Carta %d venceu\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2);
    printf("Pib per Capita:Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
    printf("Super poder:Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);


    return 0;

}
