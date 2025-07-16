#include <stdio.h>

int main() {
    int numeros[5];
    int valor;

    //para armazenar os valores no vetores com for
    for(valor = 0; valor < 5; valor++) {//incremento para número de perguntas 
        printf("Digite o %dº número inteiro: ", valor + 1);
        scanf("%d", &numeros[valor]);
    }

    // para exibir os valores armazenados com for
    printf("\nOs números digitados foram:\n");
    for(valor = 0; valor < 5; valor++) {//incremento valor ao número
        printf("\nposição %d ; valor: %d ",valor, numeros[valor]);
    }

    printf("\n");
    return 0;
}
