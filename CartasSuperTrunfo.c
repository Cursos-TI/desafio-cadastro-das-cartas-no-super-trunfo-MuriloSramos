#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main() {
    // Variáveis da primeira carta, separadas para cada atributo da cidade.
    // Carta 1.

    char estado1[2];
    char codigo_da_carta [5]; 
    char nome_da_cidade1 [50]; 
    char nome_da_cidade1b [25];
    int populacao1; 
    float area1; 
    float pib1;
    int numero_de_pontos_turisticos;
    float densidade_populacional1;
    float pib_per_capita1;
    

    //Variaveis para a segunda carta.
    // Carta 2.
    char estado2[2];
    char codigo_da_carta2 [5];
    char nome_da_cidade2 [50];
    char nome_da_cidade2b [25];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Apresentação do Jogo.
    printf("Bem Vindo ao jogo Super Trunfo!\n");

    // Ordem de Cadastro.
    printf("Cadastre suas cartas. \n");

    // Cadastro das Cartas feito pelo úsuario.
    // Variaveis para cada atributo.
    // Solicitação ao usuário valores e infurmações aos atributos da cidade.
    //-Estado,-Código da Carta,-Nome da Carta,-quantidade da População,-tamanho da Área Demográfica,-quantidade em Reais do PIB,-Números de Pontos Turísticos.
    // Função 'SCANF' para captura as entradas de atributos pelo usuário.

    // Carta 1.
    printf("Digite um estado com uma letra de A-H:  \n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida do número de 01 a 04:  \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade:  \n");
    scanf("%s %s", &nome_da_cidade1, &nome_da_cidade1b);

    printf("Digite o número da população da cidade:  \n");
    scanf("%d", &populacao1);

    printf("Digite a área demográfica:  \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:  \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:  \n");
    scanf("%d", &numero_de_pontos_turisticos);
    getchar();

    // Divisão entre população/area da cidade (x / y = densidade popúlacional)
     // Função de divisão
    densidade_populacional1 = populacao1 / area1;

    // Divisão entre  Pib / População (x / y = Pib per capita)
     // Função de divisão
    pib_per_capita1 = pib1 / populacao1;


    // Cadastro das Cartas feito pelo úsuario.
    // Variaveis para cada atributo.
    // Solicitação ao usuário valores e infurmações aos atributos da cidade.
    //-Estado,-Código da Carta,-Nome da Carta,-quantidade da População,-tamanho da Área Demográfica,-quantidade em Reais do PIB,-Números de Pontos Turísticos.
    // Função 'SCANF' para captura as entradas de atributos pelo usuário.

    // Carta 2.
    printf("Digite um estado com uma letra de A-H:  \n");
    scanf("%c", &estado2);

    printf("Digite a letra do estado seguida pelo número de 01 a 04  \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade  \n");
    scanf("%s", &nome_da_cidade2, &nome_da_cidade2b);

    printf("Digite o número da população da cidade:  \n");
    scanf("%d", &populacao2);

    printf("Digite a área demográfica:  \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:  \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:  \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Divisão de população/area da cidade (x / y = densidade popúlacional)
    // Função de divisão
     densidade_populacional2 = populacao2 / area2;

     // Divisão entre  Pib / População (x / y = Pib per capita)
     // Função de divisão
     pib_per_capita2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    // Exibição dos valores atribuidos pelo usuário a cada cidade na função 'PRINTF'.

    // Carta 1.
    printf("Carta 1.\n");
    printf("Estado:  %c.\n", estado1);
    printf("Código:  %s.\n", codigo_da_carta);
    printf("Cidade:  %s %s.\n", nome_da_cidade1, nome_da_cidade1b);
    printf("População:  %d habitantes.\n", populacao1);
    printf("Área:  %.2f Km²\n", area1);
    printf("PIB da cidade:  %.2f Bilhões de rais.\n", pib1);
    printf("Número de Pontos Turísticos:  %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %f\n", densidade_populacional1);
    printf("Pib per capita: %f\n", pib_per_capita1);

    // Exibição dos Dados das Cartas:
    // Exibição dos valores atribuidos pelo usuário a cada cidade na função 'PRINTF'.

    // Carta2.
    printf("Carta 2.\n");
    printf("Estado 2:  %c.\n", estado2);
    printf("Código:  %s.\n", codigo_da_carta2);
    printf("Cidade:  %s %S.\n", nome_da_cidade2, nome_da_cidade2b);
    printf("População:  %d habitantes.\n", populacao2);
    printf("Área:  %.2f Km²\n", area2);
    printf("PIB da cidade:  %.2f Bilhões de reais.\n", pib2);
    printf("Número de Pontos Turísticos:  %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %f\n", densidade_populacional2);
    printf("Pib per capita: %f\n", pib_per_capita2);

    // Informações atribuidas pelo usuário.
    return 0;

} 