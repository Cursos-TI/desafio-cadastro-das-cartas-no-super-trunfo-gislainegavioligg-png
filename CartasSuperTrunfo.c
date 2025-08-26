#include <stdio.h>



int main() {
    
    char estado , estado2;           //variáveis referentes à carta 1 e carta 2 do jogo 
    char codigo[5] , codigo2[5];
    char cidade[15] , cidade2[15];  //função string para escrever os nomes 
    unsigned long int populacao , populacao2;
    float area , area2;             //tipo float para valores com casas decimais 
    float pib , pib2;
    int numero_pontos_turisticos , numero_pontos_turisticos2;
    float densidadepopulacional , densidadepopulacional2;
    float densidadepopinversa = 0.0012561236 , densidadepopinversa2 = 0.0020447389;
    float pibpercapita , pibpercapita2;
    float superpoder , superpoder2;
    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;
    

    printf("Desafio Super Trunfo: Carta 1\n");      //Apenas um título para o código

    printf("\n");                                   //Pular uma linha

    printf("Digite a letra do Estado: ");           //Imprimir na tela a mensagem 
    scanf(" %c" , &estado);                        //Leitura da informação digitada pelo usuário

    printf("Digite o Código da carta: ");
    scanf("%s" , codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s" , cidade);

    printf("Digite a população: ");
    scanf("%lu" , &populacao);

    printf("Digite a área em km²: ");
    scanf("%f" , &area);

    printf("Digite o PIB: ");
    scanf("%f" , &pib);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d" , &numero_pontos_turisticos);

    densidadepopulacional = populacao / area;        //cálculo usando o operador divisão para obter o resultado de Densidade Populacional da cidade.

    pibpercapita = pib / populacao;                 //cálculo usando o operador divisão para obter o resultado do valor do Pib per capita da cidade.

    superpoder = (float)populacao + area + pib + (float)numero_pontos_turisticos + densidadepopinversa + pibpercapita;

    
    printf("\nCarta 1\n");                            //Título Carta 1                     

    printf("Estado:%c\n" , estado);
    
    printf("Código:%s\n" , codigo);

    printf("Cidade:%s\n" , cidade);

    printf("População:%lu\n" , populacao);

    printf("Área: %.2f Km²\n" , area);

    printf("PIB: %.2f bilhões de reais\n" , pib);

    printf("Número de Pontos Turísticos:%d\n" , numero_pontos_turisticos);

    printf("A densidade populacional é: %.2f hab/km²\n" , densidadepopulacional);

    printf("O PIB per capita é: %f mil reais\n" , pibpercapita);

    printf("Super Poder: %f \n" , superpoder);

    printf("\n");

    printf("Desafio Super Trunfo: Carta 2\n");

    printf("\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c" , &estado2);

    printf("Digite o Código da carta: ");
    scanf("%s" , codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s" , cidade2);

    printf("Digite a população: ");
    scanf("%lu" , &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f" , &area2);

    printf("Digite o PIB: ");
    scanf("%f" , &pib2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d" , &numero_pontos_turisticos2);

    densidadepopulacional2 = populacao2 /area2;

    pibpercapita2 = pib2 / populacao2;

    superpoder2 = (float)populacao2 + area2 + pib2 + (float)numero_pontos_turisticos2 + densidadepopinversa2 + pibpercapita2;

    printf("\n");

    printf("\nCarta 2\n");

    printf("Estado:%c\n" , estado2);
    
    printf("Código:%s\n" , codigo2);

    printf("Cidade:%s\n" , cidade2);

    printf("População:%lu\n" , populacao2);

    printf("Área: %.2f Km²\n" , area2);

    printf("PIB: %.2f bilhões de reais\n" , pib2);

    printf("Número de Pontos Turísticos:%d\n" , numero_pontos_turisticos2);

    printf ("A densidade populacional é: %.2f hab/km²\n" , densidadepopulacional2);

    printf("O PIB per capita é: %f mil reais\n" , pibpercapita2);

    printf("Super Poder:%f \n" , superpoder2);

    printf("\n");

    resultadoA = populacao>populacao2;
    resultadoB = area>area2;
    resultadoC = pib>pib2;
    resultadoD = numero_pontos_turisticos>numero_pontos_turisticos2;
    resultadoE = densidadepopinversa<densidadepopinversa2;
    resultadoF = pibpercapita>pibpercapita2;
    resultadoG = superpoder>superpoder2;

    printf("\n");

    printf("População:  %d\n", resultadoA);
    printf("Área:  %d\n", resultadoB);
    printf("PIB:  %d\n", resultadoC);
    printf("Número de Pontos Turísticos:  %d\n", resultadoD);
    printf("Densidade Populacional:  %d\n", resultadoE);
    printf("PIB per capita:  %d\n", resultadoF);
    printf("Super Poder:  %d\n", resultadoG);

    printf("\n");




    

    return 0;
}
