#include <stdio.h>

int main() {
    int idade;
    int ingresso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Possui um ingresso?\nDigite 1 para sim\nDigite 0 para não: ");
    scanf("%d", &ingresso);

    if (ingresso != 0 && ingresso != 1) {
        printf("Digite somente 1 ou 0, por favor. Execute o programa novamente.\n");
        scanf("%d", &ingresso);

    }

    if (idade >= 14 && ingresso == 1) {
        printf("Pode entrar no cinema.\n");
    } else if (idade >= 14 && ingresso == 0) {
        printf("Idade mínima atingida, mas não tem ingresso.\n");
    } else {
        printf("Não pode entrar no cinema.\n");
    }

    return 0;
}
