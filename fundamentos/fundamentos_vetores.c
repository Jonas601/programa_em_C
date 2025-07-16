#include <stdio.h>

int main() {
    char nomes_alunos[5][10]= {"0","Jonas ","Wender ","Fernanda ","Darillem "};//CADEIA DE  variaveis
    int numeros_alunos[4] = { 1, 2 , 3 , 4 };
    float nota_aluno [5] = {0, 10.0 , 6.6 , 8.9 , 7.8 };
    int cont;
    
    printf("nomes de alunos: ");//logica de alunos
    for(cont = 1 ; cont < 5; cont++){
    printf("\naluno %d : %s",cont, nomes_alunos[cont]);
    }
    printf("\n");
    
    printf("numeros de alunos: ");
    for(cont = 0; cont < 4; cont++){
    printf("\n%d", numeros_alunos[cont]);
    }
    printf("\n");
    
    printf("notas do alunos: ");
    for(cont = 1 ; cont < 5; cont++){
    printf("\nnota %d : %.1f",cont, nota_aluno[cont]);
    }
    printf("\n");



    return 0;
}