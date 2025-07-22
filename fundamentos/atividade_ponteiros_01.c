#include <stdio.h>

   int main() {
       char nome_completo[150];
       int idade;
       float altura;
       int *pnt_idade;
       char *pnt_nome;
       float *pnt_altura;

       pnt_idade = &idade; 
       pnt_idade = &nome;
       pnt_idade = &altura; 
       
      for(cont = 0;cont < 3; cont++){
          printf("dados pessoais da %d° pessoa",cont+1);
          printf("digite seu nome completo");
          fgets(nome_completo,sizeof(nome_completo),stdin);
          
          printf("digite sua idade");
          scanf("%d",&idade);
          getchar();
          
          printf("digite sua altura '1.78' ");
          scanf("%f",&altura);
          getchar();
          
      }
     
       return 0;
   }