
#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        
    };
    printf("Valores da matriz 2x3:\n");
    for(int lin = 0; lin < 2; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matriz[lin][col]);
}
printf("\n");
}
return 0;
}
/////////separação//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
/////////separação///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        
    };
    printf("Valores da matriz 2x3:\n");
    for(int lin = 0; lin < 2; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matriz[lin][col]);
        }
    printf("\n");
    }
return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
##include <stdio.h>

int main() {
    int prioridades[3][3]= {
        {3,2,1},//impacto alto
        {6,5,4},//impacto médio
        {9,8,7}//impacto baixo
    };
    //cabeçalho da tabela
    printf("\t\t\t\t\timpacto");
    printf("\nurgência\n");
    for(int lin = 0;lin  < 3; lin++){
        for(int col = 0; col < 3; col++){
           printf("\t\t\t%d ",prioridades[lin][col]);  
        }
       printf("\n");
    }
    
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    int matriz[2][2];
    int soma = 0;
    int multiplicacao = 1;

    // Armazenamento da matriz
    printf("Digite os valores para a matriz 2x2:\n");
    for (int lin = 0; lin < 2; lin++) {
        for (int col = 0; col < 2; col++) {
            printf("Posição [%d][%d]: ", lin, col);
            scanf("%d", &matriz[lin][col]);
            getchar();
        }
    }

    // Cálculo da soma e multiplicação: Observe que o mesmo bloco de FOR serve para fazer os cálculos
    for (int lin = 0; lin < 2; lin++) {
        for (int col = 0; col < 2; col++) {
            soma += matriz[lin][col];
            multiplicacao *= matriz[lin][col];
        }
    }

    // Resultados
    printf("\nSoma de todos os valores: %d\n", soma);
    printf("Multiplicação de todos os valores: %d\n", multiplicacao);

    return 0;
}