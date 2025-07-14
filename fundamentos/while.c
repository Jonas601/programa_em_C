#include <stdio.h>

int main() {//variaveis
    int numero;
    int soma = 0;
    
    while (1) {//repetiçao deve ser 1 para não dar erro 
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {//condição para parar 
            break;
        }
        soma += numero;//soma 
    }
    printf("A soma total dos números digitados é: %d\n", soma);

    return 0;
}