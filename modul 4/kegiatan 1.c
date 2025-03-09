#include <stdio.h>

int main() {
    int transaksi, total, pilihan, i;

    do {
        printf("\n=== Pencatatan Transaksi ===\n");
        total = 0;
        
        // Menggunakan while loop untuk mencatat transaksi
        while (1) {
            printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan): ");
            if (scanf("%d", &transaksi) != 1) { // Validasi input angka
                printf("Input tidak valid. Harap masukkan angka.\n");
                while (getchar() != '\n'); // Membersihkan buffer input
                continue;
            }

            if (transaksi == 0) {
                break; // Keluar dari loop jika transaksi = 0
            }
            if (transaksi < 0) {
                printf("Transaksi tidak boleh negatif. Lewati transaksi ini.\n");
                continue; // Lewati transaksi negatif
            }
            total += transaksi;
        }

        printf("Total dari transaksi tersebut adalah: %d\n", total);

        // Menampilkan menu untuk melanjutkan
        printf("Apakah Anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
        if (scanf("%d", &pilihan) != 1 || (pilihan != 1 && pilihan != 0)) { // Validasi input pilihan
            printf("Pilihan tidak valid. Program akan dihentikan.\n");
            break;
        }

    } while (pilihan == 1); // Menggunakan do/while untuk melanjutkan pencatatan

    
    printf("\nTerima kasih!\n");
    

    return 0;
}