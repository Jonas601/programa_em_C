#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        soma += numero;
    }
    printf("A soma total dos números digitados é: %d\n", soma);

    return 0;
}