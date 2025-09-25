#include <stdio.h>

int TAMANHO_TABULEIRO = 10;
int TAMANHO_NAVIO = 3;
int AGUA = 0;
int NAVIO = 3;

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Coordenadas iniciais dos navios
    int linha_horizontal = 0;
    int coluna_horizontal = 7;

    int linha_vertical = 5;
    int coluna_vertical = 1;

    // Posiciona navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = NAVIO;
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = NAVIO;
    }

    // Exibe cabeçalho com letras das colunas
    printf("   ");
    for (char letra = 'A'; letra < 'A' + TAMANHO_TABULEIRO; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    // Exibe tabuleiro com números das linhas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i + 1); // Linhas numeradas de 1 a 10
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
