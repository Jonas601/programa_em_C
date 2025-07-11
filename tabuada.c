#include <stdio.h>

int main(){
    int numero,x;//variaveis declara
     
    printf("digite um valor de 1 a 10: ");
    scanf("%d",&numero);//campo para receber a variavel numero
    
    for(x = 1;x <= 50 ; x+=2){//devlarando valor de 'X' uma das variaveis
        int result = numero*x;//opreção mátematica
        printf("\n%d x %d = %d",numero,x,result);//demonstrar o resultado para o usuario
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