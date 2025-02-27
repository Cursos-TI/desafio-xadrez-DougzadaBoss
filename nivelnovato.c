#include <stdio.h>
 
int main (){

  //definição das variáveis

  int j = 0;
  int opcao;
  int cavaloI = 0;
  int cavaloJ = 0;

  //inicio da interação com o usuário

  printf("***BEM VINDO AO XADREZ***\n\n");

  printf("Digite o numero referente a peça que deseja mover.\n");

  printf("1- TORRE\n");
  printf("2- BISPO\n");
  printf("3- RAINHA\n");
  printf("4- CAVALO\n");
  scanf ("%i", &opcao);

  //inicio do switch para mover a peça de acordo com a esolha do jogador

  switch (opcao) {
    case 1:

    printf("\n");

    //inicio do loop para movimentação da torre usando While

    while ( j < 5)
    {
      printf("DIREITA ");
      j++;
    }
    printf("\n\nA torre se moveu 5 casas para a direita.\n");
  break;

    //inicio do loop para movimentação do bispo usando do while

    case 2:
    printf("\n");
  do 
  {   
      printf("CIMA,DIREITA ");
      j++;
  } while ( j < 5);
  
    printf("\n");
    printf("\nO bispo se moveu 5 casas na diagonal direita.");
    break;

    //inicio da movimentação da rainha usando for

    case 3:
    printf("\n");
    for (j; j<8; j++)
    {
      printf("ESQUERDA ");
    }
    printf("\n\n");
    printf("A rainha se moveu 8 casas para a esquerda.");

    break;

    case 4:

    
//movimentação do cavalo usando o for aninhado

/*for (int i=0, j=0; i <1; i++)
{
    for(j; j <2; j++)
        {
            printf("BAIXO\n\n");
        }
        printf("ESQUERDA\n");
}printf ("\nO cavalo se moveu 2 casas para baixo e 1 casa para a esquerda.");*/


    //MOVIMENTAÇÃO USANDO DO-WHILE

    //inicio do while externo
do 
{
    //inicio do while interno que movimentará o cavalo para cima ou para baixo
    do 
    {
        printf("BAIXO \n\n");
        cavaloJ++;
    } while (cavaloJ < 2);
    //fim do while interno

    
    printf("ESQUERDA");
    cavaloI++;
} while ( cavaloI < 1);
 printf ("\nO cavalo se moveu 2 casas para baixo e 1 casa para a esquerda.");
    //fim do while externo responsável por movimentar o cavalo para direita ou esquerda

    break;

    default:
    printf("Opção inválida");
    break;
  }


return 0;
}