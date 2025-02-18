#include <stdio.h>

int main (){

   int tabuleiro = 8, bispo = 1;
   char movimento = 'a', movimentotab = 'h';
//inicio da interação com o usuário para captar os movimentos desejados.

   printf("***Bem vindo ao jogo de xadrez!\n\n***");
   printf("A movimentação das peças sera baseada em letras e número, sendo números representando as laterais do tabuleiro e letras para as partes de cima e baixo. Segue exemplo abaixo\n\n");

   //inicio do for para exemplificar o tabuleiro

   for(int exemplonum= 8; exemplonum >= 1; exemplonum--)
   {
    printf("%d\n",exemplonum);

    
   }
   for (int exemploletra = 'A'; exemploletra <= 'H'; exemploletra ++)
   {
       printf("%c ",exemploletra );
       
   }
   printf("\n\nDigite a letra referente a casa que deseja: ");
   scanf("%c",&movimento);

   printf("Agora digite o numero referente a casa que deseja: ");
   scanf ("%d",&bispo);


 for (tabuleiro; bispo <= tabuleiro; bispo ++)
 {
        
    for (movimento, movimentotab; movimento <= movimentotab; movimento++)
    {
        printf("Bispo terminou na casa: %c, %d", movimento, bispo);

    }

 }





    return 0;
}