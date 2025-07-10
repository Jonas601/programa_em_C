#include <stdio.h>
#define idade_minima 18 //constante deinidade no cabeçalho mas pode ser na folha principal como const int idade =18 
int main(){
    int idade; //variavel dados do usuario
printf("digite a idade:  ");
scanf("%d", &idade);

    if (idade >= idade_minima) { //condição minima do codigo
        if (idade > 60) { //condição exigencia de idenficar um idoso
        printf("maior de idade e idoso\n");
        }
        else {
           printf("maior de idade");
            
        }
    }
 else{ //caso nao apresente as condições minimas 
    printf("menor de idade");
}

return 0; 
}