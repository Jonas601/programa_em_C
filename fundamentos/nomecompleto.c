#include <stdio.h>
#include <string.h>
 int main(){
     char nomecompleto[20];
     char apelido[10];
     int idade;
     float altura;
     
     printf("digite seu nome completo: ");
     fgets(nomecompleto,sizeof(nomecompleto), stdin);
    
    printf("digite seu apelido: ");
    scanf("%s", apelido);
    
    printf("digite sua idade: ");
    scanf("%d", &idade);
    
    printf("digite sua altura: ");
    scanf("%f", &altura);
    
    
    printf("\nbem-vindo %s ou %s seu apelido , possui %d anos e %.2f metros de altura", nomecompleto, apelido, idade, altura);
    
    return 0;
 }
