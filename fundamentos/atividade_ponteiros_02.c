#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
typedef struct {
    int idade;
    char nomeCompleto[150];
    float altura;
} Pessoa;

int main() {
    Pessoa pessoas[3]; // Vetor de 3 pessoas

    // Ponteiros fora do laço (no início do main)
    int *pnt_idade;
    char *pnt_nome;
    float *pnt_altura;

    // Leitura dos dados
    for (int cont = 0; cont < 3; cont++) {
        printf("\n_____ Pessoa %d ________\n", cont + 1);

        printf("Digite o Nome Completo: ");
        fgets(pessoas[cont].nomeCompleto, sizeof(pessoas[cont].nomeCompleto), stdin);
        pessoas[cont].nomeCompleto[strcspn(pessoas[cont].nomeCompleto, "\n")] = '\0';

        printf("Digite a idade: ");
        scanf("%d", &pessoas[cont].idade);
        getchar(); 

        printf("Digite a altura: ");
        scanf("%f", &pessoas[cont].altura);
        getchar(); 
    }

    // Exibição dos dados (acesso direto)
    printf("\n____ Dados das Pessoas ____\n");
    for (int cont = 0; cont < 3; cont++) {
        printf("\n____ Pessoa %d _____\n", cont + 1);
        printf("Nome   : %s\n", pessoas[cont].nomeCompleto);
        printf("Endereço do nome   : %p\n", &pessoas[cont].nomeCompleto); // sem (void *)

        printf("Idade  : %d\n", pessoas[cont].idade);
        printf("Endereço da idade  : %p\n", &pessoas[cont].idade); // sem (void *)

        printf("Altura : %.2f\n", pessoas[cont].altura);
        printf("Endereço da altura : %p\n", &pessoas[cont].altura); // sem (void *)
    }

    // Exibição usando ponteiros
    printf("\n____ Dados das Pessoas via Ponteiros ____\n");
    for (int cont = 0; cont < 3; cont++) {
        // Atribuição dos ponteiros
        pnt_idade = &pessoas[cont].idade;
        pnt_nome = pessoas[cont].nomeCompleto;
        pnt_altura = &pessoas[cont].altura;

        printf("\n---- Pessoa %d ----\n", cont + 1);
        printf("Nome   : %s\n", pnt_nome);
        printf("Idade  : %d\n", *pnt_idade);
        printf("Altura : %.2f\n", *pnt_altura);

        printf("Endereço do Nome   : %p\n", pnt_nome);     // sem (void *)
        printf("Endereço da Idade  : %p\n", pnt_idade);   // sem (void *)
        printf("Endereço da Altura : %p\n", pnt_altura);  // sem (void *)
    }

    return 0;
}
