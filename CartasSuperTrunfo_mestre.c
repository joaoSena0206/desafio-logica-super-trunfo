#include <stdio.h>

int comparaAtributo(char pais1[], char pais2[], long double atributo1, long double atributo2, int inverso)
{
    int cartaVencedora = 0;

    printf("Carta 1 (%s): %.2Lf \n", pais1, atributo1);
    printf("Carta 2 (%s): %.2Lf \n", pais2, atributo2);

    if (inverso == 0)
    {
        if (atributo1 > atributo2)
        {
            cartaVencedora = 1;
        }
        else if (atributo1 < atributo2)
        {
            cartaVencedora = 2;
        }
        else
        {
            printf("Empate!");

            return 0;
        }
    }
    else
    {
        if (atributo1 < atributo2)
        {
            cartaVencedora = 1;
        }
        else if (atributo1 > atributo2)
        {
            cartaVencedora = 2;
        }
        else
        {
            printf("Empate!");

            return 0;
        }
    }
    
    printf("Vencedor: Carta %d!\n", cartaVencedora);

    return 0;
}

int main()
{
    // Declara as váriáveis que guardam as informações dos países
    char nome_pais1[100] = "Brasil";
    unsigned int populacao_pais1 = 211100000;
    float area_pais1 = 8510000;
    long double pib_pais1 = 2.174 * 1e12;
    int pontosTuristicos_pais1 = 1000;
    float densidade_pais1 = 23.8;
    long double soma_pais1;

    char nome_pais2[100] = "Estados Unidos";
    unsigned int populacao_pais2 = 334914895;
    float area_pais2 = 9833517;
    long double pib_pais2 = 29.168 * 1e12;
    int pontosTuristicos_pais2 = 1500;
    float densidade_pais2 = 34.06;
    long double soma_pais2;

    // Mostra o menu interativo na tela
    int opcaoMenu;
    int opcaoMenu2;

    printf("Escolha abaixo qual atributo será comparado entre as duas cartas: \n\n");

    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");

    printf("Opção: ");
    scanf("%d", &opcaoMenu);

    printf("\nAgora selecione o segundo atributo com base no menu acima (não repita!): ");
    scanf("%d", &opcaoMenu2);

    // Checa se as opções são iguais
    if (opcaoMenu == opcaoMenu2)
    {
        printf("\nAs opcões não podem ser iguais! Escolha novamente.");

        return -1;
    }

    // De acordo com a opção escolhida compara o atributo e mostra na tela
    printf("\nComparação de Atributos ");

    switch (opcaoMenu)
    {
        case 1:
            printf("(População)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, populacao_pais1, populacao_pais2, 0);

            soma_pais1 = populacao_pais1;
            soma_pais2 = populacao_pais2;

            break;
        
        case 2:
            printf("(Área)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, area_pais1, area_pais2, 0);

            soma_pais1 = area_pais1;
            soma_pais2 = area_pais2;

            break;

        case 3:
            printf("(PIB)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, pib_pais1, pib_pais2, 0);

            soma_pais1 = pib_pais1;
            soma_pais2 = pib_pais2;

            break;
        
        case 4:
            printf("(Pontos turísticos)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, pontosTuristicos_pais1, pontosTuristicos_pais2, 0);

            soma_pais1 = pontosTuristicos_pais1;
            soma_pais2 = pontosTuristicos_pais2;

            break;

        case 5:
            printf("(Densidade demográfica)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, densidade_pais1, densidade_pais2, 1);

            soma_pais1 = densidade_pais1;
            soma_pais2 = densidade_pais2;

            break;

        default:
            printf("Opção inválida!");

            break;
    }

    // Segunda comparação de atributo
    printf("\nComparação de Atributos ");

    switch (opcaoMenu2)
    {
        case 1:
            printf("(População)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, populacao_pais1, populacao_pais2, 0);

            soma_pais1 += populacao_pais1;
            soma_pais2 += populacao_pais2;

            break;
        
        case 2:
            printf("(Área)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, area_pais1, area_pais2, 0);

            soma_pais1 += area_pais1;
            soma_pais2 += area_pais2;

            break;

        case 3:
            printf("(PIB)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, pib_pais1, pib_pais2, 0);

            soma_pais1 += pib_pais1;
            soma_pais2 += pib_pais2;

            break;
        
        case 4:
            printf("(Pontos turísticos)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, pontosTuristicos_pais1, pontosTuristicos_pais2, 0);

            soma_pais1 += pontosTuristicos_pais1;
            soma_pais2 += pontosTuristicos_pais2;

            break;

        case 5:
            printf("(Densidade demográfica)\n\n");

            comparaAtributo(nome_pais1, nome_pais2, densidade_pais1, densidade_pais2, 1);

            soma_pais1 += densidade_pais1;
            soma_pais2 += densidade_pais2;

            break;

        default:
            printf("Opção inválida!");

            break;
    }

    // Mostra quem ganhou pela soma dos atributos
    printf("\nSoma dos Atributos: \n\n");

    printf("Carta 1 (%s): %.2Lf \n", nome_pais1, soma_pais1);
    printf("Carta 2 (%s): %.2Lf \n", nome_pais2, soma_pais2);

    if (soma_pais1 > soma_pais2)
    {
        printf("Resultado: Carta 1 venceu!");
    }
    else if (soma_pais2 > soma_pais1)
    {
        printf("Resultado: Carta 2 venceu!");
    }
    else
    {
        printf("Empate!");
    }
}