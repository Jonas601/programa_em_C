#include <stdio.h>

int main(){
    int contador;
    
    for(contador = 1;contador <= 10; contador ++)
    {
        printf("%d\n",contador);
    } // fim de laço de repetição com incremento
    for(contador = 10; contador >= 0; contador --){
        printf("%d\n",contador);
    }// fim de laço de repetição com decremento
}
#include <stdio.h> //pares 

int main(){
    int contador;
    
    for(contador = 0 ;contador <= 20; contador +=2){
        printf("%d\n",contador);
    }
} 

#include <stdio.h>//contador infinito

int main(){
    int contador;
    
    for(contador = 1 ;contador >=0; contador ++){
        printf("%d\n",contador);
    }
} 
