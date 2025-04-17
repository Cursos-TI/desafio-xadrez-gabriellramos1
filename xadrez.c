#include <stdio.h>

// Torre: move 5 casas para a direita (recursivo)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: move 5 casas na diagonal (cima + direita)
void moverBispo(int cima, int direita) {
    if (cima == 0 || direita == 0) return;
    printf("Cima Direita\n");
    moverBispo(cima - 1, direita - 1);
}

// Rainha: move 8 casas para a esquerda (recursivo)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");

    // Cavalo: 2 pra cima, 1 pra direita (em "L")
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j >= 0; j--) {
            if (i == 2 && j == 1) break;
            if (i == 1 && j == 2) continue;

            if (i == 0 && j == 2) {
                printf("Cima\n");
            } else if (i == 1 && j == 1) {
                printf("Cima\n");
            } else if (i == 2 && j == 0) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}