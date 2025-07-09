#include <stdio.h>

int main(){
    
    int idade;
    int ingresso;
    
    printf("digite sua idade: ");
    scanf("%d",idade);
    
    printf("possui um ingresso ? \ndigite 1 para sim \n 0 para não?"); 
    scanf("%d",ingresso);
    
    if(idade >= 14 && ingresso == 1 ){
         printf("pode entrar");
        }
        else {
        printf("não pode entar");
        }
        return 0 ;
    
}