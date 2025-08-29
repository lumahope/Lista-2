/*1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética 
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de 
reprovado para média inferior a 7.0. */
#include <stdio.h>

int main() {
    // Declaração das variáveis para as notas e a média
    float nota1, nota2, nota3, nota4;
    float media;

    // --- Entrada de Dados ---
    // Solicita e lê as quatro notas do usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // --- Processamento ---
    // Calcula a média aritmética
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // --- Saída de Dados ---
    // Imprime a média calculada, formatada com duas casas decimais
    printf("\nA media do aluno e: %.2f\n", media);

    // Verifica a condição para aprovação ou reprovação
    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}