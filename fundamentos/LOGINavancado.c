#include <stdio.h>
#include <string.h>
int main() { 
    char nome[100];
    int idade;
    char genero;
    char cpf[12];
    char telefone[30];
    char email[50];
    float peso;
    float altura;
    
    printf("digite seu nome completo: ");
    fgets(nome,sizeof(nome),stdin);
    
    printf("digite sua idade: ");
 scanf("%d",&idade);
 
 printf("digite seu gênero f ou m: ");
 scanf(" %c", &genero);
 
 printf("digite seu cpf(apenas número): "); // esse codigo pode melhorar
 scanf("%s", cpf);
 
 printf("número de telefone(apenas número): ");
 scanf("%s", telefone);
 
 printf("digite seu e-mail: ");
 scanf("%s", email);
 
 printf("digite seu peso: ");
 scanf("%f",&peso);
 
 printf("digite sua altura: ");
 scanf("%f",&altura);
 
   printf("\nSeus Dados Pessoais São:\n");
    printf("\nNome: %s\n", nome);
    printf("\nIdade: %d anos \n ", idade);
    printf("\nGênero: %c\n", genero);
    printf("\nCPF: %s\n", cpf);
    printf("\nTelefone: %s\n", telefone);
    printf("\nE-mail: %s\n", email);
    printf("\npeso: %.2f kg \n ", peso);
    printf("\naltura: %.2f metros\n",altura);
 
    return 0 ;
    
}