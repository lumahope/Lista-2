/*2) Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferiora 500 
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do 
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento. */
#include <stdio.h>

int main() {
    // Declaração da variável para o salário
    float salario;

    // --- Entrada de Dados ---
    // Solicita e lê o salário do funcionário
    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    // --- Processamento e Saída ---
    // Verifica se o salário é inferior a 500
    if (salario < 500.0) {
        // Se for, calcula o reajuste de 30%
        float novo_salario = salario * 1.30;
        
        // Imprime o novo salário formatado
        printf("\nO funcionario tem direito ao aumento.\n");
        printf("Salario reajustado: R$ %.2f\n", novo_salario);
    } else {
        // Se não for, informa que não há direito ao aumento
        printf("\nO funcionario nao tem direito ao aumento.\n");
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}