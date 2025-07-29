#include <stdio.h>

int main() {
    // Declaração de variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;



    // Instruções e entrada dos dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);



    // Exibição das informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    

    // Exibição das informações da carta 1
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;

    /*
    printf("%formato1 %formato2", variavel1, variavel2, variavel3, variavel 4, variavel5, variavel6, variavel 7)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

}
