#include <stdio.h>

int main(){
  // ===============================
  // Mover a Torre 5 casas para a direita
  // ===============================
  for (int i = 0; i < 5; i++){
    printf("Direita\n"); // Imprime a direção do movimento
  }

  // ===============================
  // Mover o Bispo 5 casas na diagonal para cima e à direita
  // ===============================
  int contadorBispo = 0; // Contador para o while
  while (contadorBispo < 5){
    printf("Cima Direita\n"); // Movimento diagonal do bispo
    contadorBispo++;
  }

  // ===============================
  // Mover a Rainha 8 casas para a esquerda
  // ===============================
  int contadorRainha = 0; // Contador para o do-while
  do {
    printf("Esquerda\n"); // Movimento horizontal da rainha
    contadorRainha++;
  } while (contadorRainha < 8);

  
  return 0;
}