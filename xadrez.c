#include <stdio.h>

int main() {
    // -------------------------------
    // Torre: 5 casas para a direita
    // Estrutura: for
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // -------------------------------
    // Bispo: 5 casas na diagonal (cima + direita)
    // Estrutura: while
    // -------------------------------
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // -------------------------------
    // Rainha: 8 casas para a esquerda
    // Estrutura: do-while
    // -------------------------------
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
