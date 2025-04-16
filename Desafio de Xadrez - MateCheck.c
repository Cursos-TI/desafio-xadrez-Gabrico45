#include <stdio.h>

int main ()
{
    int rainha = 0;
    int torre;
    int bispo = 0;
    int escolha;
    int cavalo = 0;
    int cavaloBaixo = 0;
    
    printf("        --- Xadrez Virtual --- \n");
    printf("Escolha a peça na qual voce vai movimentar \n");
    printf("1- Torre\n""2- Bispo\n""3- Rainha\n""4- Cavalo\n: ");
    scanf("%d", &escolha);
    
    // Função recursiva para Torre
    for (torre = 0; torre < 5; torre++)
    {
        if (escolha == 1)
        {
            printf("Torre: Direita\n");
            
        }  
    } 
    // Função recursiva para  Bispo
    if (escolha == 2)
    {
        do {
            printf("Bispo: Cima, Direita\n"); 
            bispo++; 
        } while 
            (bispo < 5);
    }
    // Função recursiva Rainha
    if (escolha == 3)
    {
        while (rainha < 8)
        {
            printf("Rainha: Esquerda \n");
            rainha++;
        }     
    }   
 
    //Função recursiva para Cavalo
    for (cavalo = 0; cavalo < 1; cavalo++)
    {
        if (escolha == 4)
        {
            while (cavaloBaixo < 2)
            {
                printf("Baixo\n");
                cavaloBaixo++;
                
            }
            printf("Esquerda\n");
        }   return 0;
    }
    
}
