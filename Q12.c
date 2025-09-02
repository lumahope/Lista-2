/*Faça um programa que receba três notas de um aluno, calcule e imprima a média*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Recebe as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3;

    // Imprime o resultado
    printf("\nA media das notas e: %.2f\n", media);

    return 0;
}
