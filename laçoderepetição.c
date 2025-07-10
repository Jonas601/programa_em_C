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
