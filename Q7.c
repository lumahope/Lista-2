/*8) No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de
3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
mencionadas. A tabela a seguir fornece os pesos das notas:
Laboratório - peso 2
Av. Semestral - peso 3
Exame final - peso 5
Faça um programa que receba as 3 notas do estudante, calcule e imprima a
média final e o conceito desse estudante.
O conceito segue a tabela abaixo:
média final conceito
8.0 |__| 10.0 A
7.0 |__ 8.0 B
6.0 |__ 7.0 C
5.0 |__ 6.0 D
< 5.0 E

*/

#include <stdio.h>

int main() {
    float lab_grade, sem_grade, final_exam_grade, final_average;

    // Recebe as três notas do usuário
    printf("Digite a nota do trabalho de laboratório (0 a 10): ");
    scanf("%f", &lab_grade);

    printf("Digite a nota da avaliação semestral (0 a 10): ");
    scanf("%f", &sem_grade);

    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &final_exam_grade);

    // Calcula a média ponderada
    final_average = (lab_grade * 2 + sem_grade * 3 + final_exam_grade * 5) / (2 + 3 + 5);

    // Imprime a média final
    printf("\nA média final do estudante é: %.2f\n", final_average);

    // Determina e imprime o conceito
    if (final_average >= 8.0) {
        printf("O conceito do estudante é: A\n");
    } else if (final_average >= 7.0) {
        printf("O conceito do estudante é: B\n");
    } else if (final_average >= 6.0) {
        printf("O conceito do estudante é: C\n");
    } else if (final_average >= 5.0) {
        printf("O conceito do estudante é: D\n");
    } else {
        printf("O conceito do estudante é: E\n");
    }

    return 0;
}
