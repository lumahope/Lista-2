/*10) Faça um programa que receba um número, verifique se este número é par ou ímpar e imprima a mensagem.*/
#include <stdio.h>

int main() {
    int numero;

    // Recebe o número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
