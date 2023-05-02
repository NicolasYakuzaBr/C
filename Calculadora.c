#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Selecione a operação desejada:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    int opcao;
    scanf("%d", &opcao);

    if (opcao == 1) {
        resultado = num1 + num2;
    } else if (opcao == 2) {
        resultado = num1 - num2;
    } else if (opcao == 3) {
        resultado = num1 * num2;
    } else if (opcao == 4) {
        resultado = num1 / num2;
    } else {
        printf("Operação inválida.");
        return 0;
    }

    printf("Resultado: %f\n", resultado);

    return 0;
}
