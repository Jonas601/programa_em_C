#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    
    printf("digite o primeiro numero: ");
    scanf("%d",&a);
    
    printf("digite o segundo numero: ");
    scanf("%d",&b);
    
    if( a == b ){
        printf("os dois são iguais :%d , %d",a,b);
    }
    if(a > b) {
        printf("o primeiro valor é maior que o segundo: %d , %d", a,b);
    }
    if( a < b){
        printf("o primeiro valor é menor que o segundo: %d , %d",a,b);
    }
    
}