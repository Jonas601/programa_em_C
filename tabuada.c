#include <stdio.h>

int main(){
    int numero,x;
     
    printf("digite um valor de 1 a 10: ");
    scanf("%d",&numero);
    
    for(x = 1;x <= 50 ; x+=2){
        int result = numero*x;
        printf("\n%d x %d = %d",numero,x,result);
    }
    
}
#include <stdio.h>

int main(){
    int numero,x;//declara variaveis
     
    printf("digite um valor de 1 a 10: ");
    scanf("%d",&numero);// campo para o valor digitado
    
    for(x = 1;x <= 50 ; x++){//declara valor de "x" e  até onde ir
        int result = numero*x;//campo da operação desejada
        printf("\n%d x %d = %d",numero,x,result);//demosntrar o resultado
    }
    
}