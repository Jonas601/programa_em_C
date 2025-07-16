
#include <stdio.h>

int main() { 
    int x;
    int y; 
    int num;
    int opcao = 1;
    
    while(opcao != 0){
         
        printf("\n======   Calculadora Básica    ======\n");
        printf("\nO que deseja fazer com os dois números escolhidos?\n");
        printf("\n1 - soma\n");
        printf("\n2 - subtrair\n");
        printf("\n3 - multiplicar\n");
        printf("\n4 - dividir\n");
        printf("\n0 - sair da calculadora\n");
        printf("\n escolha uma das opções\n");
        scanf("%d",&opcao);
         
        if(opcao >= 1 && opcao <= 4){
        
        printf("\n>>> Digite o dois números que deseja realizar a operação <<<\n");
            printf("\nDigite o 1° valor: \n");
             scanf("%d",&x);
            printf("\nDigite o 2° valor: \n");
             scanf("%d",&y);
        }
        switch(opcao){
            case 1:
             printf("  ______________________________________");
            printf("\n    O resultado de %d + %d = %d\n",x,y,x+y);
             printf("  ______________________________________\n");
            break;
            case 2:
             printf("  ______________________________________");
             printf("\n   O resultado de %d - %d = %d\n",x,y,x-y);
              printf("  ______________________________________\n");
            break;
            case 3:
             printf("  ______________________________________");
             printf("\n   O resultado de %d x %d = %d\n",x,y,x*y);
              printf("  ______________________________________\n");
            break;
            case 4:
             printf("  ______________________________________");
             printf("\n   O resultado de %d / %d = %d \n",x,y,x/y);
             printf("  ______________________________________\n");
            break;
            case 0:
             printf("  ______________________________________");
            printf("\n    Encerrando programa...\n");
             printf("  ______________________________________\n");
            break;
        }
    }

    return 0;
}