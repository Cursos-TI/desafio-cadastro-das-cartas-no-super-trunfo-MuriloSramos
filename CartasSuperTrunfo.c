#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main() {
    // Variáveis da primeira carta, separadas para cada atributo da cidade.
    // Carta 1.

    char estado1; 
    char codigo_da_carta [5]; 
    char nome_da_cidade [25] ; 
    int populacao; 
    float area; 
    float pib;
    int numero_de_pontos_turisticos;
    

    //Variaveis para a segunda carta.
    // Carta 2.
    char estado2;
    char codigo_da_carta2 [5];
    char nome_da_cidade2 [25];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

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
    scanf("%s", &nome_da_cidade);

    printf("Digite o número da população da cidade:  \n");
    scanf("%d", &populacao);

    printf("Digite a área demográfica:  \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:  \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade:  \n");
    scanf("%d", &numero_de_pontos_turisticos);
    getchar();

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
    scanf("%s", &nome_da_cidade2);

    printf("Digite o número da população da cidade:  \n");
    scanf("%d", &populacao2);

    printf("Digite a área demográfica:  \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:  \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:  \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    
    // Exibição dos Dados das Cartas:
    // Exibição dos valores atribuidos pelo usuário a cada cidade na função 'PRINTF'.

    // Carta 1.
    printf("Carta 1.\n");
    printf("Estado:  %c.\n", estado1);
    printf("Código:  %s.\n", codigo_da_carta);
    printf("Cidade:  %s.\n", nome_da_cidade);
    printf("População:  %d habitantes.\n", populacao);
    printf("Área:  %.2f Km²\n", area);
    printf("PIB da cidade:  %.2f Bilhões de rais.\n", pib);
    printf("Número de Pontos Turísticos:  %d\n", numero_de_pontos_turisticos);
    

    // Exibição dos Dados das Cartas:
    // Exibição dos valores atribuidos pelo usuário a cada cidade na função 'PRINTF'.

    // Carta2.
    printf("Carta 2.\n");
    printf("Estado 2:  %c.\n", estado2);
    printf("Código:  %s.\n", codigo_da_carta2);
    printf("Cidade:  %s.\n", nome_da_cidade2);
    printf("População:  %d habitantes.\n", populacao2);
    printf("Área:  %.2f Km²\n", area2);
    printf("PIB da cidade:  %.2f Bilhões de reais.\n", pib2);
    printf("Número de Pontos Turísticos:  %d\n", numero_de_pontos_turisticos2);


    // Informações atribuidas pelo usuário.
    return 0;

}
