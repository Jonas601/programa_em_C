//precisa da biblioteca <string.h> e é uma familia que declara em partes uma informação dessa pessoa;
struct Pessoa{
char nome[150];
char cpf [15];
int idade;
};
//ANTES
char Nome_pessoa[150];
char CPF_pessoa[15];
int Idade_pessoa;
char Nome_pessoa2[150];
char CPF_pessoa2[15];
int Idade_pessoa2;
char Nome_pessoa3[150];
char CPF_pessoa3[15];
int Idade_pessoa3;

//depois do struct
//REGISTRO
struct Pessoa{
char nome[150];
char cpf [15];
int idade;
};