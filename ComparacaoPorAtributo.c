#include <stdio.h>
    int main(){
    // Definindo todas a variaveis

    char estado1;
    char estado2;
    char codigo1[3];
    char codigo2[3];
    char nomedacidade1[50];
    char nomedacidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosturisticos1;
    int pontosturisticos2;
    float densidade_populacional1;
    float densidade_populacional2;
    double pibPerCapita1;
    double pibPerCapita2;


    // Inserindo as informações da primeira carta
    
    printf("\nVamos começar com a primeira carta!!\n\n");
    printf("Digite uma letra de 'A' a 'H'(Representando um dos oitos estados): ");
    scanf(" %s", &estado1);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf(" %s", &codigo1);
    
    getchar(); //O getchar(); serve justamente para consumir esse \n que sobrou no buffer
    printf("Digite o nome da cidade: ");
    fgets(nomedacidade1 , 50, stdin); 

    printf("O número de habitantes na cidade: ");
    scanf(" %d", &populacao1);
    
    printf("A área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area1);

    printf("O Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib1);
    
    printf("A quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos1);

    // Inserindo as informações da segunda carta
    printf("\nAgora vamos para segunda carta!!\n\n");
    printf("Digite uma letra de 'A' a 'H'(Representando um dos oitos estados): ");
    scanf(" %s", &estado2);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf(" %s", &codigo2);
    
    getchar(); //O getchar(); serve justamente para consumir esse \n que sobrou no buffer
    printf("Digite o nome da cidade: ");
    fgets(nomedacidade2 , 50, stdin);
    
    printf("O número de habitantes na cidade: ");
    scanf(" %d", &populacao2);
    
    printf("A área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area2);

    printf("O Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib2);
    
    printf("A quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos2);
    
    //calculando a densidade e o PIB per capita
    densidade_populacional1 = populacao1 / area1 ;
    densidade_populacional2 = populacao2 / area2 ;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    
    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta1 - %s:%d\n", nomedacidade1, populacao1);
    printf("Carta2 - %s:%d\n", nomedacidade2, populacao2);
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1( %s) Venceu!\n", nomedacidade1);
    } else {
        printf("Resultado: Carta 2( %s) Venceu!\n", nomedacidade2);
    }
    
    return 0;
}
