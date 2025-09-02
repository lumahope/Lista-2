/*Faça um programa que receba dois números e imprima o menor dos dois.*/
#include <stdio.h>

int main() {
    float num1, num2;

    // Solicita e recebe os dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Compara os números e imprime o menor
    if (num1 < num2) {
        printf("O menor numero e: %.2f\n", num1);
    } else if (num2 < num1) {
        printf("O menor numero e: %.2f\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
