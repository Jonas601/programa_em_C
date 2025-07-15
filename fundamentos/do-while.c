#include <stdio.h>

int main() {
    int number,par = 0, x =0;
    
    
    do {
        printf("digite o %d° número: ", x + 1);
        scanf("%d",&number);
        
        if(number %2 == 0){
            par++;
        }
       x++; 
    } 
       while( x < 10);
       printf("quantidade de pares %d ",par);
    return 0;
}