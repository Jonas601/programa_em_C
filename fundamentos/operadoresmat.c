#include <stdio.h>
#include <math.h>
int main(){//definição de variaveis
    int a;
    int b;
    
    printf("digite o primeiro numero: ");
    scanf("%d",&a);
    
    printf("digite o segundo numero: ");
    scanf("%d",&b);
    
    if( a == b ){
        printf("os dois são iguais :%d , %d",a,b);
    }
    if(a > b) {
        printf("o primeiro valor é maior que o segundo: %d , %d", a,b);
    }
    if( a < b){
        printf("o primeiro valor é menor que o segundo: %d , %d",a,b);
    }
}
#include <stdio.h>

int main(){//definição de variaveis
    int a;
    int b;
    
    printf("digite o primeiro valor: ");
    scanf("%d",&a);
    
    printf("digite o segundo valor: ");
    scanf("%d",&b);
    
    if( a == b ){//teste de igualdade
        printf("\nos dois são iguais :%d , %d\n",a,b);
    }
    if(a != b){
        printf("\no primeiro valor não é igual ao segundo %d , %d\n",a,b);
    }
    if(a > b) {//teste de diferença
        printf("\no primeiro valor é maior que o segundo valor: %d , %d\n", a,b);
    }
    if(a < b){
        printf("\no primeiro valor é menor que o segundo valor: %d , %d\n",a,b);
    }
    if(a >= b){//teste de proximidade
        printf("\no primeiro valor é maior ou igual ao segundo valor: %d , %d\n",a,b);
    }
    if(a <= b){
        printf("\no primeiro valor é menor ou igual ao segundo valor: %d , %d\n",a,b);
    }
    
    return 0;
    
}