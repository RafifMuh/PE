#include <stdio.h>

int posisi(int i, int j, int size) {
    return (i >= 0 && i < size && j >= 0 && j < size);
}

void koboImaginaryChess(int i, int j, int size, int *chessBoard) {
    int moves[8][2] = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}};

    for (int k = 0; k < 8; k++) {
        int a = i + moves[k][0];
        int b = j + moves[k][1];
        
        if (posisi(a, b, size)) {
            chessBoard[a * size + b] = 1;
        }
    }
}

int main() {
    int i, j;
    int chessBoard[8][8] = {0};

    printf("Masukkan 2 nilai i dan j (pisahkan dengan spasi) : ");
    scanf("%d %d", &i, &j);

    koboImaginaryChess(i, j, 8, (int *)chessBoard);

    printf("Hasil :\n");
    for (int baris = 0; baris < 8; baris++) {
        for (int kolom = 0; kolom < 8; kolom++) {
            printf("%d ", chessBoard[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}
