/*3) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de 
permissão ou negação de acesso. */

#include <stdio.h>
#include <string.h> // Biblioteca necessária para a função de comparação de strings (strcmp)

int main() {
    // Define a senha correta. O compilador calcula o tamanho do array automaticamente.
    char senha_correta[] = "ASDFG";
    
    // Cria um array de caracteres para armazenar a senha digitada pelo usuário.
    // Usamos um tamanho maior (ex: 50) para evitar problemas caso o usuário digite algo muito longo.
    char senha_digitada[50];

    // --- Entrada de Dados ---
    printf("Digite a senha de acesso: ");
    
    // Lê a string digitada pelo usuário e armazena em 'senha_digitada'.
    // Para strings (arrays de char), não usamos o '&' no scanf.
    scanf("%s", senha_digitada);

    // --- Processamento e Saída ---
    // A função strcmp() compara duas strings.
    // Ela retorna 0 se as duas forem exatamente iguais.
    if (strcmp(senha_digitada, senha_correta) == 0) {
        // Se o resultado for 0, as senhas coincidem.
        printf("\nSenha correta! Acesso permitido.\n");
    } else {
        // Se o resultado for diferente de 0, as senhas não coincidem.
        printf("\nSenha incorreta! Acesso negado.\n");
    }

    return 0;
}