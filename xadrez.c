#include <stdio.h>

int main() {

    // ==================================
    // SIMULAÇÃO DE MOVIMENTOS DE XADREZ
    // ==================================
    // Esta seção do código simula movimentos básicos de peças de xadrez.
    // Exemplo: movimento do peão, torre, cavalo, bispo, rainha e rei.
    // Estruturas de repetição que serão usadas:
    // Torre: for
    // Cavalo: while e for (loops aninhados)
    // Bispo: while
    // Rainha: do-while
    // ==================================

    // Quantidade de casas que cada peça pode se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 2; // Movimento do Cavalo na vertical
    int casasEsquerda = 1; // Movimento do Cavalo na horizontal
    
    // ==================================
    // Movimento da Torre (usando for)
    // ==================================
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) { 
        printf("Direita (%d)\n", i);
    }

    printf("Torre moveu %d casas. \n\n", casasTorre);

    // ==================================
    // Movimento do Bispo (usando while)
    // ==================================
    printf("=== Movimento do Bispo ===\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    printf("Bispo moveu %d casas. \n\n", casasBispo);

    // ==================================
    // Movimento da Rainha (usando do-while)
    // ==================================
    printf("=== Movimento da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("Rainha moveu %d casas. \n\n", casasRainha);

    // ==================================
    // Movimento do Cavalo (usando while e for)
    // ==================================
    // O Cavalo se move em "L": 2 casas em uma direção e 1 casa perpendicularmente
    printf("=== Movimento do Cavalo ===\n");

    // Movimento para baixo (2 casas)
    for (int linha = 1; linha <= casasBaixo; linha++) {
        printf("Baixo (%d)\n", linha);

        // Movimento para esquerda (1 casa)
        if (linha == casasBaixo) {
            for (int coluna = 1; coluna <= casasEsquerda; coluna++) {
                printf("Esquerda (%d)\n", coluna);
                coluna++;
            }
        }
    }   
    printf("Cavalo moveu em L: %d casas para baixo e %d casa para esquerda. \n\n", casasBaixo, casasEsquerda);
    printf("\nFim da Simulação de Movimentos de Xadrez.\n");

    return 0;
}
