#include <stdio.h>

int main() {

    //variáveis
    char nome[50], nome_do_estado1[50], nome_do_estado2[50], cidade1[50], cidade2[50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;

    //Saudar o jogador, orientar sobre o jogo e criar a primeira carta
    printf("Seja bem vindo ao jogo Trunfo em C!\n");
    printf("Para começãrmos, por favor difite seu nome: ");
    scanf("%s", nome);
    printf("Muito bem, %s! Agora digite as informações necessárias para criar duas cartas de trunfo.\n", nome);
    printf("Vamos começar com a primeira carta. Digite o nome do estado: ");
    scanf("%s", nome_do_estado1);
    printf("Digite uma cidade do estado de %s: +", nome_do_estado1);
    scanf("%s", cidade1);
    printf("Digite a população da cidade de %s: ", cidade1);
    scanf("%d", &populacao1);
    printf("Agora digite a área da cidade de %s: ", cidade1);
    scanf("%f", &area1);
    printf("Digite o PIB da cidade de %s: ", cidade1);
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade de %s: ", cidade1);
    scanf("%d", &pontos_turisticos1);


    //Criar a segunda carta
    printf("Agora vamos criar a segunda carta.\n");
    printf("Digite o nome do estado: ");
    scanf("%s", nome_do_estado2);
    printf("Digite uma cidade do estado de %s: ", nome_do_estado2);
    scanf("%s", cidade2);
    printf("Digite a população da cidade de %s: ", cidade2);
    scanf("%d", &populacao2);
    printf("Agora digite a área da cidade de %s: ", cidade2);
    scanf("%f", &area2);
    printf("Digite o PIB da cidade de %s: ", cidade2);
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade de %s: ", cidade2);
    scanf("%d", &pontos_turisticos2);


    //Printar as cartas

    printf("Ótimo! Agora que temos as duas cartas criadas, vamos comparar os atributos de cada cidade.\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", nome_do_estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", nome_do_estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    
    
    return 0;
}