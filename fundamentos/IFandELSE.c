#include <stdio.h>
#define idade_minima 18 //constante
int main(){
    int idade; //variavel
printf("digite a idade:  ");
scanf("%d", &idade);

    if (idade >= idade_minima) { //condição 01
        if (idade > 60) { //condição 02
        printf("maior de idade e idoso\n");
        }
        else {
           printf("maior de idade");
            
        }
    }
 else{ //condição 03
    printf("menor de idade");
}

return 0; 
}