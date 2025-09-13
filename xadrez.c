#include <stdio.h>

// -------------------------------
// Função recursiva para a Torre
// Move n casas para a direita
// -------------------------------
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// -------------------------------
// Função recursiva para a Rainha
// Move n casas para a esquerda
// -------------------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------------------
// Função recursiva para o Bispo
// Move n casas na diagonal (cima + direita)
// Também com loops aninhados para reforçar a lógica
// -------------------------------
void moverBispo(int casas) {
    if (casas == 0) return;

    // loop externo: movimento vertical (cima)
    for (int i = 0; i < 1; i++) {
        // loop interno: movimento horizontal (direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// -------------------------------
// Movimento do Cavalo (loops complexos)
// Move em "L": 2 para cima, 1 para direita
// -------------------------------
void moverCavalo() {
    int movVertical = 0;
    int movHorizontal = 0;

    // loop externo: movimento vertical
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            movVertical++;
        } else {
            // loop interno: movimento horizontal
            int j = 0;
            while (j < 1) {
                if (movHorizontal == 0) {
                    printf("Direita\n");
                    movHorizontal++;
                } else {
                    break; // já moveu a casa necessária
                }
                j++;
            }
        }
    }
}

// -------------------------------
// Função principal
// -------------------------------
int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
