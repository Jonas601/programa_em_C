#include <stdio.h>

int main() {
    int number,par = 0, x =0;
    
    
    while( x < 10){
        printf("digite o %d° número: ", x + 1);
        scanf("%d",&number);
        
        if(number %2 == 0){
            par++;
        }
       x++; 
    }
       printf("quantidade de pares %d ",par);
    return 0;
}