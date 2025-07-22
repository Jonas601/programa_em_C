#include <stdio.h>

int calcularSoma(int n1, int n2) {
    return (n1+n2);
}

int main() {
    int nota1, nota2, soma;
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
	getchar();
	
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

     soma = calcularSoma(nota1, nota2);

    printf("A soma dos numeros é:%d", soma);

    return 0;
}
