#include <stdio.h>

int main(){//variaveis
    int x;
    int y;
     
     for(x = 1; x <= 5; x++){// for sobre for 
        
        for(y= 1; y <= 5; y++){
            printf("%dx%d=%d\n",x,y,x * y);//estrutura
        }
        printf("\n");
     }
}