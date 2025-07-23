#include <stdio.h>
#include <stdlib.h>
int main() {
   
    
   
    // Alocação dinâmica de memória para uma variável do tipo inteiro
    float *pnt_altura = (float *) malloc(sizeof(float));
     
     //float *pnt_altura;
     float altura;
     
      printf("Digite sua altura");
    scanf("%f",&altura);
    
    printf("A altura é: %.2f",altura);
    printf("\nO endereço físico alocado dinamicamente: %p", &pnt_altura);
    // Libera a memória alocada
    
    free(pnt_altura);
    
    return 0;
}