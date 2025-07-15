#include <stdio.h>

int main() {
    int number,par = 0, x =0;//mesma coisa de apenas while so que com do 
    
    
    do {
        printf("digite o %d° número: ", x + 1);
        scanf("%d",&number);
        
        if(number %2 == 0){
            par++;
        }
       x++; 
    } 
       while( x < 10);//presença de while  depois do do
       printf("quantidade de pares %d ",par);
    return 0;
}