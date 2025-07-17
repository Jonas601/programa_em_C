#include <stdio.h>
#include <string.h>

int main() {
    
    int num;
    
    printf("            ==== Cadastros ====\n");
    printf(" Quantos cadastros deseja efetuar(valor inteiro)? : ");
    scanf("%d",&num);
    getchar();
    
    printf("\n");
    
    char nomes[num][100];
    
    for (int cont = 0; cont < num; cont++) {
        printf("Digite o %d° nome completo: ", cont + 1);
        fgets(nomes[cont], 100, stdin);
        nomes[cont][strcspn(nomes[cont], "\n")] = '\0';
    }
     
    printf("\n");
    printf("Nomes cadastrados:\n\n");
    for (int cont = 0; cont < num; cont++) {
        printf("%d°: %s\n", cont + 1, nomes[cont]);
    }
 
  return 0;
}