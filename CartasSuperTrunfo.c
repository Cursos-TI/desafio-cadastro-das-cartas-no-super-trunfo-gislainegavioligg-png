#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado;
    char codigo[5];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

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

    printf("Área:%f\n" , area);

    printf("PIB:%f\n" , pib);

    printf("Número de Pontos Turísticos:%d\n" , numero_pontos_turisticos);






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
