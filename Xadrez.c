#include <stdio.h>


int main(){

int bispo = 1, rainha = 1, cavalo = 1;

// Movimentação do Bispo
printf("\nMovimentação do Bispo\n");
do { 
    printf("Cima, Direita\n");
    bispo++;
} while (bispo <= 5);

//Movimentação Rainha
printf("\nMovimentação da Rainha\n");
while (rainha <= 8)
{
    printf("Esquerda\n");
    rainha++;
}

//Movimentação da Torre
printf("\nMovimentação da Torre\n");
for (int i = 1; i <= 5 ; i++)
{
    printf("Direita\n");
}

// Movimentação do Cavalo
printf("\nMovimentação do Cavalo\n");
//for (cavalo = 1; cavalo <= 1; cavalo++)
while (cavalo <= 1)
{

    for (int i = 1; i <= 2; i++){
        printf("Cima \n");
    }
    cavalo++;
    printf("Direita \n");
}







return 0;

}