#include <stdio.h>

int main() {//declarando tres variaveis para não dar erro na hora do incremento
    int number,par = 0, x =0;
    
    
    while( x < 10){//declarando quantidade de numeros a receber
        printf("digite o %d° número: ", x + 1);//incrementar mais 1 ao x e receber varios numeros
        scanf("%d",&number);//chamando o numero que o usuario digitou
        getchar();//limpar memoria
        
        if(number %2 == 0){//condição que testa para poder contar um número par
            par++;//os números par é somado e mostra a quantidade entre os 10
        }
       x++; //incremento para o número x 
    }
       printf("quantidade de pares %d ",par);//mostrar a quantidade de pares entre os 10 números digitados
    return 0;
}