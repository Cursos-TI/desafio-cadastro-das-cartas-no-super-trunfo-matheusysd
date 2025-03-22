#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;
    float super_poder1, super_poder2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n\n=== CARTA 1 - Vamos cadastrar sua primeira carta! ===\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);


    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + 
                   (float)pontos_turisticos1 + pib_per_capita1 + (1000000.0f/densidade1);

    printf("\n=== CARTA 2 - Agora vamos cadastrar sua segunda carta! ===\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + 
                   (float)pontos_turisticos2 + pib_per_capita2 + (1000000.0f/densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Seção de exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Seção de exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Após calcular todos os atributos, fazer as comparações
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta %d venceu (%d)\n", 
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2) ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           (pib1 > pib2) ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2,
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           (densidade1 < densidade2) ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita1 > pib_per_capita2) ? 1 : 2,
           (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n",
           (super_poder1 > super_poder2) ? 1 : 2,
           (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}
