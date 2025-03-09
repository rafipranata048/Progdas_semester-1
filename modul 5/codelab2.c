#include <stdio.h>

int main() {
	
    int toko[2][3] = { 
        {5, 8, 6}, {3, 7, 9}

    };
    int total_produk[3] = {0, 0, 0}; 
    for (int i = 0; i < 2; i++) { 

        for (int j = 0; j < 3; j++) { 
            total_produk[j] += toko[i][j];

        }
    }

    printf("Total penjualan untuk setiap produk:\n");
    printf("Produk A: %d\n", total_produk[0]);
    printf("Produk B: %d\n", total_produk[1]);
    printf("Produk C: %d\n", total_produk[2]);

    return 0;
}