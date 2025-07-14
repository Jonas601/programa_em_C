//jonas soares costa
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){ 
    bool aluno_1 = true;
    bool aluno_0 = false;
    int reposta;
    const float nota_media = 6;//declarando variaveis
    char nome_completo[100];
    float nota1,nota2;
    
    printf("você é um aluno ?\n digite 1 para sim \n digite 0 para não: ");
    scanf("%d",&reposta);
     
     if(reposta == 1){
         printf("pode prosseguir é um aluno");
     }
     else{
         printf("não pode prosseguir não é um aluno");
     }
    
    
    printf("\ndigite seu nome completo: ");//campo de preenchimento nome completo
     fgets(nome_completo,sizeof(nome_completo),stdin);
     
      printf("\ndigite sua primeira nota: ");//campo de preenchimento nota1
        scanf("%f",&nota1);
      
        printf("\ndigite sua segunda nota: ");//campo de preenchimento nota 2
          scanf("%f",&nota2);
          
          float nota_total = ((nota1 + nota2)/2);
          
          if(nota_total <= nota_media){//condião para recuperação de nota
              printf("\nerr... %svocê não passou com media %.1f ,mas é possivel fazer a recuperação",nome_completo,nota_total);
            }
          
          if(nota_total >= nota_media ){//condição de media
                  printf("\nparabens %s você passou com media %.1f no bimestre",nome_completo,nota_total);
            }
            else{//resultado caso não alcance o minimo
                printf("\nvocê reprovou %s com media %.1f ",nome_completo,nota_total);
            }
    
}

