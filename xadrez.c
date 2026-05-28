#include <stdio.h>

         // ============ Mover Bispo ========
void moverBispo(int casas) {

    
    if (casas == 0) {
        return;
    }

    for( int vertical = 0; vertical < 1; vertical++){

        for (int horizontal = 0; horizontal < 1; horizontal++){

            printf("Diagonal / Cima / Direita\n");
        }
    }
    

    
    moverBispo(casas - 1);
}

          //=========== Mover Torre ============
void moverTorre( int casas ) {

    printf("\nMovimento da Torre:\n");

    for (int i = 0; i < casas; i++) {

        printf("Direita\n");
    }
}

/// ============ MOver Rainha ============
void moverRainha(int casas ) {

    int i = 0;

    printf("\nMovimento da Rainha:\n");

    while (i < casas) {
        printf("Esquerda\n");
        i++;
    }
}

         // ========== Mover Cavalo =========
void moverCavalo() {

    printf("\nMovimento do Cavalo:\n");

    for (int cima = 1, direita = 1;
         cima <= 2;
         cima++) {

        if (cima == 1) {
            printf("Cima\n");
            continue;
        }

        printf("Cima\n");

        // break
        if (cima == 2) {
            break;
        }
    }

    printf("Direita\n");
}

// Função principal
int main() {
  
    // Bispo 5 casas diagonal direita para cima
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("Qual sera proxima jogada?\n");

    // Torre 5 casas para direita
    moverTorre(5);
    printf("Qual sera proxima jogada?\n");

    // Raina 8 casas para a esquerda
    moverRainha(8);
     printf("Qual sera proxima jogada?\n");

    // Cavalo movimento em L para cima e direita
    moverCavalo();
    printf("Qual sera a proxima jogada?\n");
    
    return 0;
}