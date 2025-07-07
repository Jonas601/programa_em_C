#include <stdio.h>
int main (){
int pet_idade = 4;
char inicial_pet_nome = 'b';
char pet_nome[10] = "bolt";
float pet_peso = 12.3;
float pet_altura = 0.45;

printf("Informações do Pet\n");
printf(" nome: %s \n idade: %d anos \n peso: %0.2f kg \n altura:%0.2f m \n",pet_nome,pet_idade,pet_peso,pet_altura);

return 0;
}
