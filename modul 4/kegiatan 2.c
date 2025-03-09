#include <stdio.h>

int main() {
    int transaksi, total, pilihan;

    do {
        printf("\n=== Pencatatan Transaksi ===\n");
        total = 0;
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan): \n");
        while (1) {
            
            
            if (scanf("%d", &transaksi) != 1) { 
                printf("Input tidak valid. Harap masukkan angka.\n");
    	        while (getchar() != '\n');
                continue;
            }

            if (transaksi == 0) {
                break;
            }
            if (transaksi < 0) {
                printf("Transaksi tidak boleh negatif. Lewati transaksi ini.\n");
                continue;
            }
            total += transaksi;
        }

        printf("Total dari transaksi tersebut adalah: %d\n", total);

        printf("Apakah Anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
        if (scanf("%d", &pilihan) != 1 || (pilihan != 1 && pilihan != 0)) {
            printf("Pilihan tidak valid. Program akan dihentikan.\n");
            break;
        }

    } while (pilihan == 1); 

    
    printf("\nTerima kasih!\n");

    return 0;
}
