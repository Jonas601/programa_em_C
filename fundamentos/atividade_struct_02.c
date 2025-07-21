#include <stdio.h>
#include <string.h>
// Declaração da estrutura
struct Movel {
char marca[100];
char modelo[100];
float valor;
int ano;
};
int main() {
//Declaração de um coordenador da struct Pessoa
struct Movel carro;
// Inicializando valores fixos
//Declaração de um coordenador da struct Pessoa
printf("Digite a marca do carro: ");
fgets(carro.marca, sizeof(carro.marca), stdin);

printf("Digite o modelo: ");
fgets(carro.modelo, sizeof(carro.modelo), stdin);

printf("Digite o ano: ");
scanf("%d",&carro.ano);

printf("Digite o valor: ");
scanf("%f",&carro.valor);


// Exibição dos dados do Coordenador
printf("\n::: Carro :::\n");
printf("marca: %s\nmodelo: %s\nano: %d\n valor: %.2f\n",carro.marca,
carro.modelo, carro.ano,carro.valor);

return 0;

}