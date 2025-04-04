#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    long int populacao1 = 0, populacao2 = 0;
    double area1 = 0, area2 = 0;
    double pib1 = 0, pib2 = 0;
    int pontos_turisticos1 = 0, pontos_turisticos2 = 0, opcao;
    double densidade1 = 0, densidade2 = 0;
    double pib_per_capita1 = 0, pib_per_capita2 = 0;

    // Leitura dos dados da primeira carta
    printf("Digite o estado da primeira cidade: ");
    scanf("%9s", estado1);
    printf("Digite o código da carta: ");
    scanf("%9s", codigo1);
    getchar(); // Limpar buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("Digite a população: ");
    scanf("%ld", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%lf", &area1);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a primeira cidade
    if (area1 > 0) {
        densidade1 = populacao1 / area1;
    }
    if (populacao1 > 0) {
        pib_per_capita1 = (pib1 * 1e9) / populacao1;
    }

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da segunda cidade: ");
    scanf("%9s", estado2);
    printf("Digite o código da carta: ");
    scanf("%9s", codigo2);
    getchar(); // Limpar buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("Digite a população: ");
    scanf("%ld", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%lf", &area2);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda cidade
    if (area2 > 0) {
        densidade2 = populacao2 / area2;
    }
    if (populacao2 > 0) {
        pib_per_capita2 = (pib2 * 1e9) / populacao2;
    }

    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

        if (populacao1 > populacao2){
            printf("Resultado: Carta 01 (%s) venceu!: Com %ld pessoas\n", cidade1, populacao1);
        }else{
            printf("Resultado: Carta 02 (%s) venceu!: Com %ld pessoas\n", cidade2, populacao2);
        }

        //Teste 01 switch
        printf("\nComparação de Cartas:\n");
        printf("Escolha uma opção:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Ponto turístico\n");
        printf("5. Densidade Demográfica\n");
        printf("Escolha:");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Atributo: População\n");
                printf("%s (%s): %lu\n", cidade1, estado1, populacao1);
                printf("%s (%s): %lu\n", cidade2, estado2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (populacao2 > populacao1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
    
            case 2:
                printf("Atributo: Área\n");
                if (area1 > area2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (area2 > area1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
    
            case 3:
                printf("Atributo: PIB\n");
                if (pib1 > pib2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (pib2 > pib1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
    
            case 4:
                printf("Atributo: Número de pontos turísticos\n");
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
    
            case 5:
                printf("Atributo: Densidade demográfica\n");
                if (densidade1 < densidade2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (densidade2 < densidade1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
    
            default:
                printf("Opção inválida!\n");
                
            return 0;

}

}