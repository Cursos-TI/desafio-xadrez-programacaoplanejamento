#include <stdio.h>

int main() {
  int escolha;

  do {
    // ===============================
    // Menu de seleção de peça
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
    // Executa o movimento da peça escolhida
    // ===============================
    switch (escolha) {
      case 1:
        // Mover a Torre 5 casas para a direita
        for (int i = 0; i < 5; i++) {
          printf("Direita\n");
        }
        break;

      case 2:
        // Mover o Bispo 5 casas na diagonal para cima e à direita
        {
          int contadorBispo = 0;
          while (contadorBispo < 5) {
            printf("Cima Direita\n");
            contadorBispo++;
          }
        }
        break;

      case 3:
        // Mover a Rainha 8 casas para a esquerda
        {
          int contadorRainha = 0;
          do {
            printf("Esquerda\n");
            contadorRainha++;
          } while (contadorRainha < 8);
        }
        break;

      case 4:
        // Mover o Cavalo 3 vezes no formato "L" (2 para baixo, 1 para esquerda)
        printf("Movimento do Cavalo (3 vezes em L: 2 para Baixo, 1 para Esquerda):\n");
        for (int movimento = 0; movimento < 3; movimento++) {
          int passos = 0;
          while (passos < 2) {
            printf("Baixo\n");
            passos++;
          }
          printf("Esquerda\n");
        }
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