#include <stdio.h>
int main(){

    int i = 1;//Variável utilizada nos loops

    //Movimentação torre
    for ( i = 1; i <= 5; i++)
    {
      printf("Torre: Direita!\n");
    }
    
    i = 1;
    //Movimentação Rainha
    while (i <= 8)
    {
      
       printf("Rainha: Esquerda!\n");
       i++;
    }
    
    i = 1;
    //Movimentação bispo
    do
    {
      
        printf("Bispo: Cima, direita!\n");
        i++;
    } while (i <= 5);
    



    return 0;
}