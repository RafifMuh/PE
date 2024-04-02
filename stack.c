#include <stdio.h>

int twoStacks(int maxJumlah, int array_a[], int banyak_array_a, int array_b[], int banyak_array_b) {
    int jumlah = 0, count = 0, i = 0, j = 0;

    printf("step 1: mengambil elemen A hingga max jumlah:\n");
    while (i < banyak_array_a && jumlah + array_a[i] <= maxJumlah) {
        jumlah += array_a[i];
        printf("%d ", array_a[i]); 
        i++;
    }
    count = i;

    printf("\nstack A: ");
    for (int a = 0; a < i; a++) {
        printf("%d ", array_a[a]);
    }
    printf("\nstack B: ");
    for (int b = 0; b < j; b++) {
        printf("%d ", array_b[b]);
    }
    printf("\n\n");

    while (j < banyak_array_b && i >= 0) {
        jumlah += array_b[j]; 
        j++;
        while (jumlah > maxJumlah && i > 0) {
            i--;
            jumlah -= array_a[i];
        }
        if (jumlah <= maxJumlah && i + j > count) {
            count = i + j;
        }
        printf("step %d: mengambil elemen dari B hingga max jumlah\n", j + 1);
        printf("stack A: ");
        for (int a = 0; a < i; a++) {
            printf("%d ", array_a[a]);
        }
        printf("\nstack B: ");
        for (int b = 0; b < j; b++) {
            printf("%d ", array_b[b]);
        }
        printf("\n\n");
    }
    return count;
}

int main() {
    int g; 
    printf("Masukkan jumlah kasus uji:\n");
    scanf("%d", &g);

    while (g--) {
        int banyak_array_a;
        int banyak_array_b;
        int maxJumlah;
        
        scanf("%d %d %d", &banyak_array_a, &banyak_array_b, &maxJumlah);
        
        int array_a[banyak_array_a];
        int array_b[banyak_array_b];

      
        for (int i = 0; i < banyak_array_a; i++)
            scanf("%d", &array_a[i]);

      
        for (int i = 0; i < banyak_array_b; i++)
            scanf("%d", &array_b[i]);

        printf("Maksimum elemen yang dapat diambil: %d\n", twoStacks(maxJumlah, array_a, banyak_array_a, array_b, banyak_array_b));
    }
    return 0;
}
