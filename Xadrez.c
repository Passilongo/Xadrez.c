#include <stdio.h>

void moverTorre(int torre){
    if (torre > 0){
         printf("Direita\n");
         moverTorre(torre - 1);
    }
}

void moverRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda \n");
        moverRainha(rainha - 1);
    }
}

void moverBispo(int bispo){
    if (bispo > 0){
        printf("Cima, Direita\n");
        moverBispo(bispo - 1);
    }
}

void moverCavalo(int cavalo){
    while (cavalo < 1)
{

    for (int i = 1; i <= 2; i++){
        printf("Cima \n");
    }
    cavalo++;
    printf("Direita \n");
}
}


int main(){


// Movimentação do Bispo
printf("\nMovimentação do Bispo\n");
    moverBispo(5);

/*do { 
    printf("Cima, Direita\n");
    bispo++;
} while (bispo <= 5);*/

//Movimentação Rainha
printf("\nMovimentação da Rainha\n");
    moverRainha(8);

/*while (rainha <= 8)
{
    printf("Esquerda\n");
    rainha++;
}*/

//Movimentação da Torre
printf("\nMovimentação da Torre\n");
    moverTorre(5);

/*for (int i = 1; i <= 5 ; i++)
{
    printf("Direita\n");
}*/

// Movimentação do Cavalo
printf("\nMovimentação do Cavalo\n");
    moverCavalo(0);

//for (cavalo = 1; cavalo <= 1; cavalo++)
/*while (cavalo <= 1)
{

    for (int i = 1; i <= 2; i++){
        printf("Cima \n");
    }
    cavalo++;
    printf("Direita \n");
}*/







return 0;

}