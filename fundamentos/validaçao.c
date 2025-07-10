#include <stdio.h>

int main() {
    int idade;//variaveis
    int ingresso;

    printf("Digite sua idade: ");//campo de dados
    scanf("%d", &idade);

    printf("Possui um ingresso?\nDigite 1 para sim\nDigite 0 para não: "); //campo de dados 
    scanf("%d", &ingresso);

    if (ingresso != 0 && ingresso != 1) { //primeira condição para caso o valor seja diferente do esperado.
        printf("Digite somente 1 ou 0, por favor. Execute o programa novamente.\n");
        scanf("%d", &ingresso);//novo campo de correção

    }

    if (idade >= 14 && ingresso == 1) {//verificar as condições mínima
        printf("Pode entrar no cinema.\n");
    } else if (idade >= 14 && ingresso == 0) {//caso apenas atenda uma das condições 
        printf("Idade mínima atingida, mas não tem ingresso.\n");
    } else {// caso não atenda nenhuma das condições mínimas
        printf("Não pode entrar no cinema.\n");
    }

    return 0;
}
