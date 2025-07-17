#include <stdio.h>

int main() {
    int matriz[2][3] = {//matriz multdimensional 
        {1, 2, 3},//virgula para declarar quebrar de linha
        {4, 5, 6}//segunda setenças
};
int i;//declara variaveis para usar no FOR
int j;

for(i = 0; i <2 ; i++){//definir,diminuir pelo valor de linhas  e incrementar
    for(j= 0; j <3; j++){//definir , diminuir o valor de colunas e incrementar
        printf("%d",matriz[i][j]);//printf para chamar os valores do for
    }
    printf("\n");//quebra de linha dentro do primeiro for
}
}