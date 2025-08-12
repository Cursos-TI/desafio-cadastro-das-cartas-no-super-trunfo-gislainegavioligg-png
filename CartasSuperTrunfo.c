#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado , estado2;
    char codigo[5] , codigo2[5];
    char cidade[15] , cidade2[15];
    int populacao , populacao2;
    float area , area2;
    float pib , pib2;
    int numero_pontos_turisticos , numero_pontos_turisticos2;

    printf("Carta 1\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c" , &estado);

    printf("Digite o Código da carta: ");
    scanf("%s" , codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s" , cidade);

    printf("Digite a população: ");
    scanf("%d" , &populacao);

    printf("Digite a área em km²: ");
    scanf("%f" , &area);

    printf("Digite o PIB: ");
    scanf("%f" , &pib);

    printf("Digite o número de Pontos Turísticos: " , "\n");
    scanf("%d" , &numero_pontos_turisticos);

    printf("Carta 1\n");

    printf("Estado:%c\n" , estado);
    
    printf("Código:%s\n" , codigo);

    printf("Cidade:%s\n" , cidade);

    printf("População:%d\n" , populacao);

    printf("Área: %.2f Km²\n" , area);

    printf("PIB: %.2f reais\n" , pib);

    printf("Número de Pontos Turísticos:%d\n" , numero_pontos_turisticos);


    printf("Carta 2\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c" , &estado2);

    printf("Digite o Código da carta: ");
    scanf("%s" , codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s" , cidade2);

    printf("Digite a população: ");
    scanf("%d" , &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f" , &area2);

    printf("Digite o PIB: ");
    scanf("%f" , &pib2);

    printf("Digite o número de Pontos Turísticos: " , "\n");
    scanf("%d" , &numero_pontos_turisticos2);

    printf("Carta 2\n");

    printf("Estado:%c\n" , estado2);
    
    printf("Código:%s\n" , codigo2);

    printf("Cidade:%s\n" , cidade2);

    printf("População:%d\n" , populacao2);

    printf("Área: %.2f Km²\n" , area2);

    printf("PIB: %.2f reais\n" , pib2);

    printf("Número de Pontos Turísticos:%d\n" , numero_pontos_turisticos2);




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
