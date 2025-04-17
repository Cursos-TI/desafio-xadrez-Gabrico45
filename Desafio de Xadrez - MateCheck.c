#include <stdio.h>

//funcão recursiva da torre
void torre(int casas)
{
    if (casas > 0) 
    {
        printf("Direita\n");
        torre(casas - 1);
    }
}

//funcão recursiva do bispo
void bispo(int casas)
{
    if (casas > 0) 
    {
        printf("Cima e Direita\n");
        bispo(casas - 1);
    }
}

//funcão recursiva da rainha
void rainha(int casas)
{
    if (casas > 0) 
    {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

//funcão recursiva do cavalo
void cavalo()
{
    int i, j;
    for(i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    for(j = 0; j < 1; j++)
    {
        printf("Direita\n");
    }
}

//menu e escolha do usuario.
int main ()
{
    int escolha;
    
    printf("        --- Xadrez Virtual --- \n");
    printf("Escolha a peça na qual voce vai movimentar \n");
    printf("1- Torre\n""2- Bispo\n""3- Rainha\n""4- Cavalo\n: ");
    scanf("%d", &escolha);
    
    //switch para decidir o numero e chamar o void que era inexistente.
    switch(escolha)
    {
        case 1:
        torre(5);
        break;

        case 2:
        bispo(5);
        break;

        case 3:
        rainha(8);
        break;

        case 4:
        cavalo(3);
        break;

        default: printf("opção não existe!\n");
        break;


    }
    return 0;
}
