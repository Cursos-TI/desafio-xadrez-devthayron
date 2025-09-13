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
    printf("\n");

    // -------------------------------
    // Cavalo: movimento em L
    // 2 casas para baixo + 1 casa para esquerda
    // Estruturas: for + while (loops aninhados)
    // -------------------------------
    printf("Movimento do Cavalo:\n");

    // Primeiro loop: movimento vertical (2 casas para baixo)
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // Segundo loop: movimento horizontal (1 casa para a esquerda)
    int passos = 1;
    while (passos <= 1) {
        printf("Esquerda\n");
        passos++;
    }

    return 0;
}
