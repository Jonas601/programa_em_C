#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    do {
        printf("Digite um número inteiro positivo (ou negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero; // soma = soma + numero
        }

    } while (numero >= 0);

    printf("A soma dos números positivos digitados é: %d\n", soma);

    return 0;
}
