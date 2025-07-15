#include <stdio.h>

int main() {// declarando variaveis incluse pares caso use for 
    int numero;
    int Pares = 0;

    // Solicita ao usuário 10 números aqui!
    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {//limite de números que o usuario deve inserir
        printf("Número %d: ", i + 1);//printf para definir a quantidade de números que o usuario vai digitar
        scanf("%d", &numero);//resgatar esse número com scanf no for

        // Verifica se o número é par,lembre-se de declara com a variavel que deseja verificar o par
        if (numero % 2 == 0) {
            Pares++;//quantidade de pares 
        }
    }

    // Exibe a quantidade de números pares 
    printf("Quantidade de números pares: %d\n", Pares);
//liçao separe os números e pares para que possa separar quantidade de números digitados para quantidade dos números descrito pelo usuario que são pares
    return 0;
}
