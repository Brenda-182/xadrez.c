#include <stdio.h>

// --------- Torre: direita ---------
void TorreParaDireita(int casas) {
    while (casas-- > 0) {
        printf("Direita\n");
    }
}

// --------- Rainha: esquerda ---------
void RainhaParaEsquerda(int casas) {
    if (casas <= 0) return;
    do {
        printf("Esquerda\n");
    } while (--casas > 0);
}

// --------- Bispo: "Cima" + "Direita" diagonal ---------
void BispoCimaDireita(int diagonais) {
    int passo = 0;
    while (passo < diagonais) {
        // vertical (1 vez)
        int v = 0;
        do { printf("Cima\n"); } while (++v < 1);

        // horizontal (1 vez)
        int h = 0;
        do { printf("Direita\n"); } while (++h < 1);

        passo++;
    }
}

// --------- Cavalo: L = 2x Cima + 1x Direita ---------
void CavaloEmL(int movimentosL, int passosCima, int passosDireita) {
    printf("Movimento do Cavalo:\n");

    int i = 0;
    while (i < movimentosL) {
        int c = 0;
        while (c < passosCima) {   // 2x Cima 
            printf("Cima\n");
            c++;
        }

        int d = 0;
        do {                        // 1x Direita 
            printf("Direita\n");
            d++;
        } while (d < passosDireita);

        i++;
    }
    printf("\n");
}

// --------- Programa principal ---------
int main(void) {
    // Quantidades 
    int CasasTorreDireita   = 5;
    int CasasBispoDiagonal  = 5;
    int CasasRainhaEsquerda = 8;

    int MovimentosEmL = 2;      // quantos "L"
    int passosCima    = 2;      // 2 para Cima
    int passosDireita = 1;      // 1 para Direita

    printf("Movimento da Torre:\n");
    TorreParaDireita(CasasTorreDireita);
    printf("\n");

    printf("Movimento do Bispo:\n");
    BispoCimaDireita(CasasBispoDiagonal);
    printf("\n");

    printf("Movimento da Rainha:\n");
    RainhaParaEsquerda(CasasRainhaEsquerda);
    printf("\n");

    CavaloEmL(MovimentosEmL, passosCima, passosDireita);

    return 0;
}
