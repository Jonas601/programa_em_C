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
    int numero,x;
     
    printf("digite um valor de 1 a 10: ");
    scanf("%d",&numero);
    
    for(x = 1;x <= 50 ; x++){
        int result = numero*x;
        printf("\n%d x %d = %d",numero,x,result);
    }
    
}