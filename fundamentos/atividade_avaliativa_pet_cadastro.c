#include <stdio.h>
#include <string.h>
//jonas soares costa
    struct Animais {
      char nome[50];
      char especie[30];
      char raca[30];
      int idade;
      float peso;
    };
    int main(){ ////area de preeencher dados
        struct Animais pet[2];//declara arrays é importante [x]
        int cont;
        printf("\t\t\t\t\t\t\t:::: Pet Shop Ouro Preto ::::\n"); 
        printf("\t\t\t\t\t\t Cadastre seu Pet Agora no nosso sistema\n");
        //sugestão : pode colocar um sistema de switch case para opção de quantos pets deseja cadastrar, pois nem todos tem 2 pets, pode colocar um menu com mais informações. 
        for(cont = 0 ; cont < 2 ; cont++){
     printf("\n===========================================================");
        printf("\nDigite o nome do seu %d° pet(apenas o primeiro ou completo): ",cont + 1);
         fgets(pet[cont].nome, sizeof(pet[cont].nome), stdin);
         pet[cont].nome[strcspn(pet[cont].nome, "\n")] = '\0';
         
         printf("\nDigite a especie dele: ");
         fgets(pet[cont].especie, sizeof(pet[cont].especie), stdin);
         pet[cont].especie[strcspn(pet[cont].especie, "\n")] = '\0';
         
         printf("\nDigite a raça dele: ");
         fgets(pet[cont].raca, sizeof(pet[cont].raca), stdin);
         pet[cont].raca[strcspn(pet[cont].raca, "\n")] = '\0';
         
          printf("\nDigite a idade dele: ");
          scanf("%d",&pet[cont].idade);
          getchar();
          
           
          printf("\nDigite o peso dele em KG: ");
          scanf("%f",&pet[cont].peso);
          getchar();
         
        }
        //exibição de dados do pet recebido pelo dono
        for (cont = 0 ; cont <2; cont++){
            printf("\n===========================================================\n");//separação de campos
            printf("\nDados do %d° animal cadastrados é:\n", cont + 1);
              printf("\nnome: %s\n",pet[cont].nome);
               printf("\nespecie: %s\n",pet[cont].especie);
                printf("\nraça: %s \n",pet[cont].raca);
                  printf("\nidade: %d anos\n",pet[cont].idade);
                    printf("\npeso: %.2f kg\n",pet[cont].peso);
        }
        return 0;
}