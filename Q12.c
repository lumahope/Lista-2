/* Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média Mensagem
0.0 |__ 5.0 reprovado
5.0 |__ 7.0 exame
7.0 |__| 10.0 aprovado */
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Recebe as três notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média aritmética
    media = (nota1 + nota2 + nota3) / 3;

    // Imprime a média
    printf("\nA media do aluno e: %.2f\n", media);

    // Verifica a situação do aluno com base na média e imprime a mensagem
    if (media >= 7.0 && media <= 10.0) {
        printf("Mensagem: Aprovado\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("Mensagem: Exame\n");
    } else {
        printf("Mensagem: Reprovado\n");
    }

    return 0;
}

