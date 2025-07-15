#include <stdio.h>

  int main() {
  int opcao;
  int number;
  int par = 0;
  int x = 0;
  
 printf("Menu:\n");
 printf("digite 10 números e veja quantos são pares, primeiro de qual maneira: \n");
 printf("1 – com o for\n");
 printf("2 – com o while\n");
 printf("3 – com o do while\n");
 printf("Escolha uma das maneiras: ");
 scanf("%d", &opcao);
 
 switch(opcao){
     case 1:
        printf("com o do\n");
        printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {//limite de números que o usuario deve inserir
        printf("digite o %d° número: ", i + 1);//printf para definir a quantidade de números que o usuario vai digitar
        scanf("%d", &number);//resgatar esse número com scanf no for

        // Verifica se o número é par,lembre-se de declara com a variavel que deseja verificar o par
        if (number % 2 == 0) {
            par++;//quantidade de pares 
        }
    }

    printf("Quantidade de números pares: %d\n", par);
    printf("foi resolvido com for\n");

     break;
     
     case 2:
     printf("com o while\n");
    
         while( x < 10){//declarando quantidade de numeros a receber
             printf("digite o %d° número: ", x + 1);//incrementar mais 1 ao x e receber varios numeros
            scanf("%d",&number);//chamando o numero que o usuario digitou
            getchar();//limpar memoria
        
        if(number %2 == 0){//condição que testa para poder contar um número par
            par++;//os números par é somado e mostra a quantidade entre os 10
        }
       x++; //incremento para o número x 
    }
       printf("quantidade de pares %d ",par);
       printf("foi resolvido com while\n");
     break;
     
     case 3:
        printf("com o do while\n");
    
    do {
        printf("digite o %d° número: ", x + 1);
        scanf("%d",&number);
        
            if(number %2 == 0){
            par++;
        }
       x++; 
    } 
       while( x < 10);//presença de while  depois do do
       printf("quantidade de pares %d ",par);
       printf("foi resolvido com do while\n");
     break;
     
     default:
     printf("opcão inválida");
     
 }
 }