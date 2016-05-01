/*Jogo Nim*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor, x, y, z;

     printf("Inicio do jogo! \n");
     printf("Tabuleiro inicial: 3 5 7 \n");
     printf("Digite se quer jogar no 3, no 5 ou no 7. \n");
     scanf("%d", &a);
     
     x=3;
     y=5;
     z=7;
    
     switch(a)
     {
         case 3:
         printf("Digite quantos quer tirar: ");
         scanf("%d", &valor);
     
         switch(valor)
         {
             case 1:
             printf("O tabuleiro atualizado eh: %d %d %d\n", x-1, y, z);
             break;
     
             case 2:
             printf("O tabuleiro atualizado eh: %d %d %d\n", x-2, y, z);
             break;
             
             case 3:
             printf("O tabuleiro atualizado eh: %d %d %d\n", x-3, y, z);
             break;

             default:
             printf("Opcao invalida!\n");
         }
         break;

