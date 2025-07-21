#include <stdio.h>
#include <string.h>
// Declaração da estrutura
struct Funcionario {
char nome[100];
char setor[15];
char situacao[150];
int matricula;
};
int main() {
//Declaração de um coordenador da struct Pessoa
struct Funcionario senior;
// Inicializando valores fixos
strcpy(senior.nome, "Joao de Souza");
strcpy(senior.setor, "admistração");
strcpy(senior.situacao,"esta trabalhando normalmente");

// Exibição dos dados do Coordenador
printf("::: Funcionario :::\n");
printf("Nome: %s\nsetor: %s\nsitução: %s\n", senior.nome,
senior.setor, senior.situacao);

struct Funcionario adm;
// Inicializando valores fixos
strcpy(adm.nome, "Joao de Souza");
strcpy(adm.setor, "admistração");
strcpy(adm.situacao,"esta trabalhando normalmente");

// Exibição dos dados do Coordenador
printf("\n::: Funcionario :::\n");
printf("Nome: %s\nsetor: %s\nsitução: %s\n", adm.nome,
adm.setor, adm.situacao);

return 0;

}