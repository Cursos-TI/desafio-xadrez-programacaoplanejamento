#include <stdio.h>

void moverTorre(int casas) {

    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    
    do
    {
        printf("Esquerda\n");
        casas--;
    } while (casas > 0);  
}

void moverBispo(int movimento) {

    while (movimento > 0){

        printf("Direita e Cima \n");
        movimento --;
       } 
    }

void MoverCavalo(int movimentoCompleto) {

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n"); // Imprime "Cima" duas vezes
        }
            printf("Esquerda\n"); // Imprime "Esquerda" uma vez   
    }
}

int main () {

    int escolherPecas;

    do {
    printf("\n===== Vamos movimentar as peças do Xadrez =====\n");
    printf("Menu:\n");
    printf("1. Torre\n");
    printf("2. Rainha\n");
    printf("3. Bispo\n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: \n");

    scanf("%d", &escolherPecas);

    switch (escolherPecas)
    {
    case 1:
        moverTorre(5);
        break;

    case 2:
        moverRainha(8);
        break;

    case 3:
        moverBispo(5);
        break;

    case 4:
        MoverCavalo(1);
        break;

    case 5:
        printf("Saindo...\n");       
        break;    
 
    default:

    printf("Opção inválida!\n");
        break;
    }

    } while (escolherPecas != 5);
  

    return 0;
}
