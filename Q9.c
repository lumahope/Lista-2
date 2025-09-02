/*
9) Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência. A procedência obedece a seguinte tabela:
Código Procedência
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7.8 ou 9 Sudeste
10 até 20 Centro-Oeste
21 até 30 Nordeste*/
#include <stdio.h>

int main() {
    int codigo;

    // Recebe o código
    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo);

    // Determina a procedência
    printf("A procedencia do produto e: ");
    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6 || (codigo >= 21 && codigo <= 30)) {
        printf("Nordeste\n");
    } else if (codigo >= 7 && codigo <= 9) {
        printf("Sudeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste\n");
    } else {
        printf("Procedencia nao identificada.\n");
    }

    return 0;
}


