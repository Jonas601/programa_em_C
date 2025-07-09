#include <stdio.h>
#define idade_minima 18
int main(){
    int idade;
printf("digite a idade:  ");
scanf("%d", &idade);

    if (idade >= 18) {
        printf("\n maior de idade");
    
        if (idade >= 60) {
        printf(" e idoso\n");
        }
    }
 else{
    printf("menor de idade");
}

return 0; 
}