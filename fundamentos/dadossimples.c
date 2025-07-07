#include <stdio.h>
int main(){
char nome[50];
int idade;
float altura;

printf("inserir nome: ");
scanf("%s", nome);

printf ("inserir idade: ");
scanf("%d", &idade);

printf("inserir altura: ");
scanf("%f",&altura);

printf("\nola,%s você tem %d anos e mede %.2f metros\n",&nome,idade,altura);
}