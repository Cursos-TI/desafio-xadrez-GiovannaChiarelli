#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    int movimentos = 1;
    for (int m = 0; m < movimentos; m++) {
        for (int i = 2; i > 0; i--) {
            if (i == 1) {
                int j = 1;
                while (j <= 1) {
                    printf("Direita\n");
                    j++;
                }
                break;
            }
            printf("Cima\n");
        }
    }

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Cima Direita\n");
        }
    }

    return 0;
}
