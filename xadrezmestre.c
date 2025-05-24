#include <stdio.h>

// ===============================
// Funções recursivas
// ===============================

// Movimento recursivo da Torre: 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha: 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo do Bispo com loop aninhado
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop externo representa o movimento vertical
    for (int i = 0; i < 1; i++) {
        // Loop interno representa o movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Movimento complexo do Cavalo: 2 para cima, 1 para direita (em L)
void moverCavalo() {
    int movimentos = 3;
    printf("Movimento do Cavalo (3 vezes em L: 2 para Cima, 1 para Direita):\n");

    for (int i = 0; i < movimentos; i++) {
        for (int vertical = 0; vertical < 2; vertical++) {
            if (vertical == 1) {
                // Usando continue para pular uma condição fictícia
                continue;
            }
            printf("Cima\n");
        }

        for (int horizontal = 0; horizontal < 2; horizontal++) {
            if (horizontal == 1) {
                // break para garantir apenas uma casa à direita
                break;
            }
            printf("Direita\n");
        }
    }
}

int main() {
    int escolha;

    do {
        // ===============================
        // Menu de seleção
        // ===============================
        printf("\nEscolha a peça que deseja mover:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Digite o número da peça: ");
        scanf("%d", &escolha);

        // ===============================
        // Executa a peça escolhida
        // ===============================
        switch (escolha) {
            case 1:
                printf("\nMovendo a Torre:\n");
                moverTorre(5);
                break;

            case 2:
                printf("\nMovendo o Bispo:\n");
                moverBispo(5);
                break;

            case 3:
                printf("\nMovendo a Rainha:\n");
                moverRainha(8);
                break;

            case 4:
                printf("\nMovendo o Cavalo:\n");
                moverCavalo();
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida. Escolha um número entre 0 e 4.\n");
                break;
        }

    } while (escolha != 0);

    return 0;
}