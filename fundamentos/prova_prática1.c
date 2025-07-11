//jonas soares costa
#include <stdio.h>
#include <string.h>

int main(){ 
    const float nota_media = 6;//declarando variaveis
    char nome_completo[100];
    float nota1,nota2;
    
    printf("\ndigite seu nome completo: ");//campo de preenchimento nome completo
     fgets(nome_completo,sizeof(nome_completo),stdin);
     
      printf("\ndigite sua primeira nota: ");//campo de preenchimento nota1
        scanf("%f",&nota1);
      
        printf("\ndigite sua segunda nota: ");//campo de preenchimento nota 2
          scanf("%f",&nota2);
          
          float nota_total = ((nota1 + nota2)/2);
          
          if(nota1 == 0 || nota2 == 0 ){//condião para recuperação de nota
              printf("\nerr... %s você não passou com media %.1f ,mas é possivel fazer a recuperação",nome_completo,nota_total);
            }
          
          if(nota_total >= nota_media ){//condição de media
                  printf("\nparabens %s você passou com media %.1f no bimestre",nome_completo,nota_total);
            }
            else{//resultado caso não alcance o minimo
                printf("\nvocê reprovou %s com media %.1f ",nome_completo,nota_total);
            }
    
}

