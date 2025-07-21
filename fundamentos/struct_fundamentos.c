                     //struct definição de classe(chame com a primeira letra em maiusculo).

//precisa da biblioteca <string.h> e é uma familia que declara em partes uma informação dessa pessoa;

struct Pessoa{
char nome[150];
char cpf [15];
int idade;
};
//ANTES  para cada membro 

char Nome_pessoa[150];
char CPF_pessoa[15];
int Idade_pessoa;
char Nome_pessoa2[150];
char CPF_pessoa2[15];
int Idade_pessoa2;
char Nome_pessoa3[150];
char CPF_pessoa3[15];
int Idade_pessoa3;

//Depois do struct
//REGISTRO depois para vários membros com poucas linhas;

struct Pessoa{
char nome[150];
char cpf [15];
int idade;
};

//REGISTRO
struct Pessoa{
char nome[150];
char cpf [15];
int idade;
};
//O que são Membros?
//Coordenador ,Instrutor ,Aluno;

/*Dados Heterogêneos - STRUCT

Coordenador Instrutor Aluno
Declaração

struct Pessoa coordenador;
struct Pessoa instrutor;
struct Pessoa aluno;

Referência aos campos
coordenador.nome;
coordenador.cpf;
coordenador.idade;*/ 

// para obter idade de um aluno seria 
//aluno.idade;
//coordenador.idade;
//etc.
/*
nicialização de valores
strcpy(coordenador.nome, “João Souza”);
strcpy(coordenador.cpf, “888.888.888-00”);
coordenador.idade = 45;

nicialização de valores
strcpy(coordenador.nome, “João Souza”);
strcpy(coordenador.cpf, “888.888.888-00”);
coordenador.idade = 45;*/

/*exemplo
inicialização de valores
strcpy(coordenador.nome, “João Souza”);
strcpy(coordenador.cpf, “888.888.888-00”);
coordenador.idade = 45;

int main() {
//Declaração de um coordenador da struct Pessoa
struct Pessoa coordenador;
// Inicializando valores fixos
strcpy(coordenador.nome, "Joao de Souza");
strcpy(coordenador.cpf, "111.222.333-44");
coordenador.idade = 45;
// Exibição dos dados do Coordenador
printf("::: Coordenador :::\n");
printf("Nome: %s\nCPF: %s\nIdade: %d\n", coordenador.nome,
coordenador.cpf, coordenador.idade);*/
