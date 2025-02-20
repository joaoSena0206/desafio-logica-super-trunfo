#include <stdio.h>


int main()
{
    // Cria variáveis para armazenar os dados das duas cartas posteriormente
    char estado_carta1[3];
    char codigo_carta1[5];
    char cidade_carta1[100];
    unsigned long int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontosTuristicos_carta1;
    float densidadePopulacional_carta1;
    float pibCapita_carta1;

    char estado_carta2[3];
    char codigo_carta2[5];
    char cidade_carta2[100];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontosTuristicos_carta2;
    float densidadePopulacional_carta2;
    float pibCapita_carta2;

    // Pega os dados da primeira carta digitados pelo usuário
    printf("Insira o estado da primeira carta: \n");
    scanf("%2s", estado_carta1);

    codigo_carta1[0] = estado_carta1[0];
    codigo_carta1[1] = estado_carta1[1];

    printf("Digite o código da carta: \n%s", estado_carta1);
    scanf("%2s", &codigo_carta1[2]);

    printf("Digite o nome da cidade da carta: \n");
    scanf(" %99[^\n]", cidade_carta1);

    printf("Digite o número de habitandes da cidade: \n");
    scanf("%lu", &populacao_carta1);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos_carta1);

    // Pega os dados da segunda carta
    printf("\nAgora você deverá digitar os dados da segunda carta \n\n");

    printf("Insira o estado da segunda carta: \n");
    scanf(" %2s", estado_carta2);

    codigo_carta2[0] = estado_carta2[0];
    codigo_carta2[1] = estado_carta2[1];

    printf("Digite o código da carta: \n%s", estado_carta2);
    scanf("%2s", &codigo_carta2[2]);

    printf("Digite o nome da cidade da carta: \n");
    scanf(" %99[^\n]", cidade_carta2);

    printf("Digite o número de habitandes da cidade: \n");
    scanf("%d", &populacao_carta2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos_carta2);

    // Calcula a densidade populacional e o pib per capita, exibindo na tela
    densidadePopulacional_carta1 = populacao_carta1 / area_carta1;
    pibCapita_carta1 = pib_carta1 * 1000000000 / populacao_carta1;

    densidadePopulacional_carta2 = populacao_carta2 / area_carta2;
    pibCapita_carta2 = pib_carta2 * 1000000000 / populacao_carta2;

    printf("\nCarta 1: \n");
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional_carta1);
    printf("PIB per capita: %.2f reais \n\n", pibCapita_carta1);

    printf("Carta 2: \n");
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional_carta2);
    printf("PIB per capita: %.2f reais \n\n", pibCapita_carta2);

    // Compara um atributo escolhido e mostra o resultado
    printf("Comparação de cartas (Atributo: Densidade Populacional): \n\n");
    printf("Carta 1 - %s (%s): %2.f hab/km² \n", cidade_carta1, estado_carta1, densidadePopulacional_carta1);
    printf("Carta 2 - %s (%s): %2.f hab/km² \n", cidade_carta2, estado_carta2, densidadePopulacional_carta2);

    if (densidadePopulacional_carta1 < densidadePopulacional_carta2)
    {
        printf("Resultado: Carta 1 (%s) venceu!", cidade_carta1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!", cidade_carta2);
    }

    return 0;
}
