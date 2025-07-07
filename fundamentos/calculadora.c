#include <stdio.h>
#include <math.h>
int main() {
    int a ;
    int b ;
   
    printf("digite o primeiro número: ");
    scanf("%d",&a);
    printf("digite o segundo número: ");
    scanf("%d",&b);
    
    int soma = a  + b;
    int multi = a  * b;
    int subtr = a - b;
    int divis = a / b;
    
    printf("\no resultado è: \n");
    printf("\nsoma: \n%d\nmultiplicação: \n%d\nsubtração: \n%d\ndivisão: \n%d",soma, multi , subtr ,divis );
    return 0 ;
    
}