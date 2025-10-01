#include <stdio.h>
int main()
{
    // Definindo todas a variaveis

    char nomedopais1[50], nomedopais2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2, escolhatributo1, escolhatributo2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2;
    int somapopulacao, somapontosturisticos;
    float somaarea, somapib, somadensidade, total1, total2;

    // Inserindo as informações da primeira carta

    printf("\nVamos começar com a primeira carta!!\n");
    printf("\nDigite o nome da País: ");
    scanf(" %s", &nomedopais1);

    printf("O número de habitantes na país: ");
    scanf(" %d", &populacao1);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area1);

    printf("O Produto Interno Bruto da país: ");
    scanf(" %f", &pib1);

    printf("A quantidade de pontos turísticos da país: ");
    scanf(" %d", &pontosturisticos1);

    // Inserindo as informações da segunda carta
    printf("\nAgora vamos para segunda carta!!\n\n");

    getchar(); // O getchar(); serve justamente para consumir esse \n que sobrou no buffer
    printf("Digite o nome da País: ");
    scanf(" %s", &nomedopais2);

    printf("O número de habitantes na país: ");
    scanf(" %d", &populacao2);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area2);

    printf("O Produto Interno Bruto da país: ");
    scanf(" %f", &pib2);

    printf("A quantidade de pontos turísticos da país: ");
    scanf(" %d", &pontosturisticos2);

    // calculando a densidade
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    // a some de atributo para cada carta

    // criando o primeiro menu de comparação
    printf("Qual atributo deseja comparar?\n");
    printf("(1)População;\n(2)Área;\n(3)PIB;\n(4)Número de Pontos turísticos;\n(5)Densidade Demográfica;\n\n");
    printf("Digite o numero correspondente ao atributo: ");
    scanf(" %d", &escolhatributo1);
    switch (escolhatributo1)
    {
    case 1:
        total1 += populacao1;
        total2 += populacao2;
        if (populacao1 > populacao2)
        {
            printf("Comparação de cartas(Atributo: População)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                   nomedopais1, populacao1, nomedopais2, populacao2, nomedopais1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Comparação de cartas(Atributo: População)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                   nomedopais1, populacao1, nomedopais2, populacao2, nomedopais2);
        }
        else
        {
            printf("Comparação de cartas(Atributo: População)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: Empate!\n",
                   nomedopais1, populacao1, nomedopais2, populacao2);
        }
        break;
    case 2:
        total1 += area1;
        total2 += area2;
        if (area1 > area2)
        {
            printf("Comparação de cartas(Atributo: Área)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu\n!",
                   nomedopais1, populacao1, nomedopais2, populacao2, nomedopais1);
        }
        else if (area2 > area1)
        {
            printf("Comparação de cartas(Atributo: Área)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu\n!",
                   nomedopais1, populacao1, nomedopais2, populacao2, nomedopais2);
        }
        else
        {
            printf("Comparação de carta(Atributo: Área)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: Empate!\n",
                   nomedopais1, populacao1, nomedopais2, populacao2);
        }

        break;
    case 3:
        total1 += pib1;
        total2 += pib2;
        if (pib1 > pib2)
        {
            printf("Comparação de cartas(Atributo: PIB)\n");
            printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                   nomedopais1, pib1, nomedopais2, pib2, nomedopais1);
        }
        else if (pib2 > pib1)
        {
            printf("Comparação de cartas(Atributo: PIB)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: %s venceu!\n",
                   nomedopais1, pib1, nomedopais2, pib2, nomedopais2);
        }
        else
        {
            printf("Comparação de cartas(Atributo: PIB)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: Empate!\n",
                   nomedopais1, pib1, nomedopais2, pib2);
        }
    case 4:
        total1 += pontosturisticos1;
        total2 += pontosturisticos2;
        if (pontosturisticos1 > pontosturisticos2)
        {
            printf("Comparação de cartas(Atributo: Pontos turísticos)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: %s venceu\n",
                   nomedopais1, pontosturisticos1, nomedopais2, pontosturisticos2, nomedopais1);
        }
        else if (pontosturisticos2 > pontosturisticos1)
        {
            printf("Comparação de cartas(Atributo: Pontos turísticos)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: %s venceu\n",
                   nomedopais1, pontosturisticos1, nomedopais2, pontosturisticos2, nomedopais2);
        }
        else
        {
            printf("Comparação de cartas(Atributo: Pontos turísticos)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: Empate!\n",
                   nomedopais1, pontosturisticos1, nomedopais2, pontosturisticos2);
        }

        break;
    case 5:
        total1 += densidade_populacional1;
        total2 += densidade_populacional2;
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("Comparação de cartas(Atributo Densidade demográfica)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d\nResultado: %s venceu!\n",
                   nomedopais1, densidade_populacional1, nomedopais2, densidade_populacional2, nomedopais1);
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            printf("Comparação de cartas(Atributo Densidade demográfica)\n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d\nResultado: %s venceu!\n",
                   nomedopais1, densidade_populacional1, nomedopais2, densidade_populacional2, nomedopais2);
        }
        else
        {
            printf("Comparação de cartas(Atributo Densidade demogrática)n");
            printf("Carta 1 - %s: %d \nCarta - 2 %s: %d\nResultado: Empate!\n",
                   nomedopais1, densidade_populacional2, nomedopais2, densidade_populacional2);
        }

        break;
    default:

        printf("Desculpe, comparação não identificada!");
        break;
    }
    printf("\nQual outro atributo deseja comparar?\n");
    printf("(1)População;\n(2)Área;\n(3)PIB;\n(4)Número de Pontos turísticos;\n(5)Densidade Demográfica;\n\n");
    printf("Digite o numero correspondente ao atributo e lembre-se de não repetir o atributo anterior: ");
    scanf(" %d", &escolhatributo2);
    if (escolhatributo2 == escolhatributo1)
    {
        printf("Atributo selecionado anteriormente");
    }
    else
    {
        switch (escolhatributo2)
        {
        case 1:
            total1 += populacao1;
            total2 += populacao2;
            if (populacao1 > populacao2)
            {
                printf("Comparação de cartas(Atributo: População)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                       nomedopais1, populacao1, nomedopais2, populacao2, nomedopais1);
            }
            else if (populacao2 > populacao1)
            {
                printf("Comparação de cartas(Atributo: População)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                       nomedopais1, populacao1, nomedopais2, populacao2, nomedopais2);
            }
            else
            {
                printf("Comparação de cartas(Atributo: População)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: Empate!\n",
                       nomedopais1, populacao1, nomedopais2, populacao2);
            }
            break;
        case 2:
            total1 += area1;
            total2 += area2;
            if (area1 > area2)
            {
                printf("Comparação de cartas(Atributo: Área)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                       nomedopais1, populacao1, nomedopais2, populacao2, nomedopais1);
            }
            else if (area2 > area1)
            {
                printf("Comparação de cartas(Atributo: Área)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                       nomedopais1, populacao1, nomedopais2, populacao2, nomedopais2);
            }
            else
            {
                printf("Comparação de carta(Atributo: Área)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: Empate!\n",
                       nomedopais1, populacao1, nomedopais2, populacao2);
            }

            break;
        case 3:
            total1 += pib1;
            total2 += pib2;
            if (pib1 > pib2)
            {
                printf("Comparação de cartas(Atributo: PIB)\n");
                printf("Carta 1 - %s: %d \nCarta 2 - %s: %d \nResultado: %s venceu!\n",
                       nomedopais1, pib1, nomedopais2, pib2, nomedopais1);
            }
            else if (pib2 > pib1)
            {
                printf("Comparação de cartas(Atributo: PIB)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: %s venceu!\n",
                       nomedopais1, pib1, nomedopais2, pib2, nomedopais2);
            }
            else
            {
                printf("Comparação de cartas(Atributo: PIB)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: Empate!\n",
                       nomedopais1, pib1, nomedopais2, pib2);
            }
        case 4:
            total1 += pontosturisticos1;
            total2 += pontosturisticos2;
            if (pontosturisticos1 > pontosturisticos2)
            {
                printf("Comparação de cartas(Atributo: Pontos turísticos)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: %s venceu\n",
                       nomedopais1, pontosturisticos1, nomedopais2, pontosturisticos2, nomedopais1);
            }
            else if (pontosturisticos2 > pontosturisticos1)
            {
                printf("Comparação de cartas(Atributo: Pontos turísticos)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: %s venceu\n",
                       nomedopais1, pontosturisticos1, nomedopais2, pontosturisticos2, nomedopais2);
            }
            else
            {
                printf("Comparação de cartas(Atributo: Pontos turísticos)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d \nResultado: Empate!\n",
                       nomedopais1, pontosturisticos1, nomedopais2, pontosturisticos2);
            }

            break;
        case 5:
            total1 += densidade_populacional1;
            total2 += densidade_populacional2;
            if (densidade_populacional1 < densidade_populacional2)
            {
                printf("Comparação de cartas(Atributo Densidade demográfica)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d\nResultado: %s venceu!\n",
                       nomedopais1, densidade_populacional1, nomedopais2, densidade_populacional2, nomedopais1);
            }
            else if (densidade_populacional2 < densidade_populacional1)
            {
                printf("Comparação de cartas(Atributo Densidade demográfica)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d\nResultado: %s venceu!\n",
                       nomedopais1, densidade_populacional1, nomedopais2, densidade_populacional2, nomedopais2);
            }
            else
            {
                printf("Comparação de cartas(Atributo Densidade demogrática)\n");
                printf("Carta 1 - %s: %d \nCarta - 2 %s: %d\nResultado: Empate!\n",
                       nomedopais1, densidade_populacional2, nomedopais2, densidade_populacional2);
            }

            break;
        default:
            printf("Desculpe, comparação não identificada!");
            break;
        }
    }

    if (total1 > total2)
    {
        printf("\nResultado final: %s venceu no somatório!\n", nomedopais1);
    }
    else if (total2 > total1)
    {
        printf("\nResultado final: %s venceu no somatório!\n", nomedopais2);
    }
    else
    {
        printf("\nResultado final: Empate no somatório!\n");
    }

    return 0;
}
