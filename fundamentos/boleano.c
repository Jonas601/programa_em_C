#include <stdio.h>
#include <stdbool.h>
int main(){
    bool ligado = true;
    bool desligado = false;
    int idade;
    
    printf("Digite sua Idade: ");
    scanf("%d",&idade);
     
     if(idade >= 18 ){
         printf("\nvocê é maior de idade tem %d anos.",idade);
     }
     else{
         printf("\nvocê é menor de idade tem %d anos! volte quando completar 18 anos.",idade);
     }
     return 0;
}