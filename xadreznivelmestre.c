#include <stdio.h>

//INICIO DA CRIAÇÃO DAS FUNÇÕES RECURSIVAS PARA MOVIMENTAÇÃO DO BISPO
void bispocimaD (int casasbispo)
    {   
        if(casasbispo > 0) 
        {
            printf("CIMA, DIREITA \n");
            
            bispocimaD (casasbispo - 1);
        } 
    }

    void bispobaixoD (int casasbispo)
    {   
        if(casasbispo > 0) 
        {
            printf("BAIXO, DIREITA \n");
            
            bispobaixoD (casasbispo - 1);
        } 
    }

    void bispocimaE (int casasbispo)
    {   
        if(casasbispo > 0) 
        {
            printf("CIMA, ESQUERDA \n");
            
            bispocimaE (casasbispo - 1);
        } 
    }

    void bispobaixoE (int casasbispo)
    {   
        if(casasbispo > 0) 
        {
            printf("BAIXO, ESQUERDA \n");
            
            bispobaixoE (casasbispo - 1);
        } 
    }


int main(){
    //DECLARAÇÃO DAS FUNÇÕES QUE VÃO RECEBER OS DADOS DO USUÁRIO PARA MOVIMENTAR O BISPO
int bispovertical;
int bispohorizontal;
int quantidadevertical;
int quantidadehorizontal;

printf("Digite primeiro a direção do bispo na vertical ( 1- CIMA, 2- BAIXO): ");
scanf("%d", &bispovertical);

//INICIO DO SWITCH PARA MOVER O BISPO SEGUNDO A OPÇÃO ESCOLHIDA PELO USUÁRIO
switch(bispovertical)
{
    case 1:
    printf("Agora digite quantas casas deseja mover para cima: ");
    scanf("%d",&quantidadevertical);

//PRIMEIRO IF PARA DETERMINAR SE O USUÁRIO ESCOLHEU UMA OPÇÃO VÁLIDA DE CASAS DE ACORDO COM O TABULEIRO DE XADREZ
if(quantidadevertical <=8) 
{
    printf("Agora digite para escolher a direção(4- ESQUERDA, 6- DIREITA): ");
    scanf("%d",&bispohorizontal);
//INICIO DO IF PARA DETERMINAR A DIREÇÃO DA DIAGONAL QUE O BISPO DEVERÁ SEGUIR
    if(bispohorizontal == 4 ) 
    {
        bispocimaE (quantidadevertical);
        printf("\n\nO bispo se moveu %d casas na diagonal CIMA ESQUERDA", quantidadevertical);
    } else 
    {
        bispocimaD (quantidadevertical);
        printf("\n\nO bispo se moveu %d casas na diagonal CIMA DIREITA ", quantidadevertical);
    }//FIM DO IF PARA DETERMINAR A DIREÇÃO DA DIAGONAL QUE O BISPO DEVERÁ SEGUIR

} 
    else 
{
    printf("Quantidade de casas digitas inválidas.");
}//FIM IF PARA DETERMINAR SE O USUÁRIO ESCOLHEU UMA OPÇÃO VÁLIDA DE CASAS DE ACORDO COM O TABULEIRO DE XADREZ
    
    break;

    case 2:

    printf("Agora digite quantas casas deseja mover para baixo: ");
    scanf("%d", &quantidadevertical);
    

    if(quantidadevertical <= 8)
    {
        printf("Agora digite para escolher a direção(4- ESQUERDA, 6- DIREITA): ");
        scanf("%d",&bispohorizontal);
        if(bispohorizontal == 4)
        {
            bispobaixoE (quantidadevertical);
            printf("\n\nO bispo se moveu %d casas na diagonal BAIXO ESQUERDA", quantidadevertical);
        }else 
        {
            bispobaixoD (quantidadevertical);
            printf("\n\nO bispo se moveu %d casas na diagonal BAIXO DIREITA", quantidadevertical);
        }
    } 
    else 
    {
        printf("Quantidade de casas digitadas inválidas");
    }
}


return 0;
}