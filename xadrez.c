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

    printf("\n");

    // ==================================
    // Movimento do Cavalo (usando while e for)
    // ==================================
    // O Cavalo se move em "L": 2 casas em uma direção e 1 casa perpendicularmente
    printf("=== Movimento do Cavalo ===\n");

    // Movimento para baixo (2 casas)
    for (int linha -= ); linha <= casasBixo; linha++) {
        printf("Baixo (%d)\n", linha);

        // Movimento para esquerda (1 casa)
        if (linha == casasBaixo) {
            for (int coluna = 1; coluna <= casasEsquerda; coluna++) {
                printf("Esquerda (%d)\n", coluna);
                coluna++;
            }
        }
    }   
    

    return 0;
}
