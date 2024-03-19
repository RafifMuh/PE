#include <stdio.h>
#include <stdbool.h>

#define MAX_KARTU 50

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubbleSort(int kartu[], int n) {
    int steps = 0;
    bool ditukar;
    for (int i = 0; i < n - 1; i++) {
        ditukar = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (kartu[j] > kartu[j + 1]) {
                tukar(&kartu[j], &kartu[j + 1]);
                steps++;
                printf("pertukaran ke %d: ", steps);
                for (int k = 0; k < n; k++) {
                    printf("%d ", kartu[k]);
                }
                printf("\n");
                ditukar = true;
            }
        }
        if (!ditukar) {
            break;
        }
    }
    return steps;
}

int main() {
    int n;
    int kartu[MAX_KARTU];

    printf("Input jumlah kartu: ");
    scanf("%d", &n);

    if (n > MAX_KARTU) {
        printf("Jumlah kartu melebihi batas maksimum.\n");
        return 1;
    }

    printf("Input nilai kartu sebanyak %d (pisahkan dengan spasi): ", n);
    for (int i = 0; i < n; i++) {
        char card[3];
        scanf("%s", card);
        if (card[0] >= '2' && card[0] <= '9') {
            kartu[i] = card[0] - '0';
        } else {
            switch (card[0]) {
                case 'J':
                    kartu[i] = 11;
                    break;
                case 'Q':
                kartu[i] = 12;
                    break;
                case 'K':
                    kartu[i] = 13;
                    break;
                case '1':
                    if (card[1] == '0') {
                        kartu[i] = 10;
                    } else {
                        printf("Nilai kartu tidak valid.\n");
                        return 1;
                    }
                    break;
                default:
                    printf("Nilai kartu tidak valid.\n");
                    return 1;
            }
        }
    }

    int steps = bubbleSort(kartu, n);
    printf("Urutan kartu setelah diurutkan: ");
    for (int i = 0; i < n; i++) {
        switch (kartu[i]) {
            case 10:
                printf("10 ");
                break;
            case 11:
                printf("J ");
                break;
            case 12:
                printf("Q ");
                break;
            case 13:
                printf("K ");
                break;
            default:
                printf("%d ", kartu[i]);
                break;
        }
    }
    printf("\n%d\n", steps);

    return 0;
}
