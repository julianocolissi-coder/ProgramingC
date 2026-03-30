#include <stdio.h>

int main() {

    // Declaração de variáveis
    float nota1, nota2, nota3;
    float media;
    char nome_aluno[50];

    //Solicitar dados:
    printf("Por favor, digite o seu nome: \n");
    fgets(nome_aluno, sizeof(nome_aluno), stdin);
    printf("Olá, %s! Digite a sua primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    //Calcular a média
    media = (nota1 + nota2 + nota3) / 3;


    //Exibir o resultado
    if (media >= 7.0) {
        printf("Parabéns, %s! Você foi aprovado com média %.2f. \n", nome_aluno, media);
    } else {
        printf("Infelizmente, %s. Você foi reprovado, pois sua média é %.2f. \n", nome_aluno, media);
    }




    return 0;
}