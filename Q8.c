#include <stdio.h>
#include <ctype.h> // Para a função tolower()

int main() {
    float altura, peso_ideal;
    char sexo;

    // Recebe a altura
    printf("Digite a sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    // Recebe o sexo
    printf("Digite o seu sexo ('m' para masculino ou 'f' para feminino): ");
    scanf(" %c", &sexo); // O espaço antes de %c é para ignorar qualquer caractere de espaço em branco

    // Converte o caractere para minúsculo para garantir que funcione com 'M' ou 'F'
    sexo = tolower(sexo);

    // Calcula o peso ideal com base no sexo
    if (sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("O seu peso ideal é: %.2f kg.\n", peso_ideal);
    } else if (sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é: %.2f kg.\n", peso_ideal);
    } else {
        printf("Sexo inválido. Por favor, digite 'm' ou 'f'.\n");
    }

    return 0;
}
