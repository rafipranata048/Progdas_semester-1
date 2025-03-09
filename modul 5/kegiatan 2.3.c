#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlah_mahasiswa, i, j;
    float nilai[100][3];
    float ratarata_matkul[3];
    float total_keseluruhan = 0;
    
    // i = jumlah mahasiswa, j = mata kuliah
    printf("Masukan jumlah mahasiswa: ");
    if (scanf("%d", &jumlah_mahasiswa) != 1) {
        printf("Input tidak valid!\n");
        return 1;  // Keluar jika input tidak valid
    }

    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("\nMasukan nilai mahasiswa ke-%d (matematika, fisika, kimia):\n", i + 1);
        for (j = 0; j < 3; j++) {
            // Input nilai untuk setiap mata pelajaran dengan validasi
            while (1) {
                printf("Mata pelajaran %d: ", j + 1);
                if (scanf("%f", &nilai[i][j]) != 1) {
                    printf("Input tidak valid! Masukkan angka saja.\n");
                    while (getchar() != '\n'); // Bersihkan input buffer
                } else {
                    break;  // Keluar dari loop jika input valid
                }
            }
        }
    }

    // Menghitung rata-rata per mata pelajaran
    for (j = 0; j < 3; j++) {
        for (i = 0; i < jumlah_mahasiswa; i++) {
            ratarata_matkul[j] += nilai[i][j];
        }
        ratarata_matkul[j] /= jumlah_mahasiswa;
    }

    total_keseluruhan = (ratarata_matkul[0] + ratarata_matkul[1] + ratarata_matkul[2]) / 3;

    // Menampilkan data nilai ujian
    printf("\nData nilai ujian:\n");
    printf("Mahasiswa   Matematika   Fisika   Kimia\n");
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Mahasiswa %-9d:", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%10.2f", nilai[i][j]);
        }
        printf("\n");
    }

    // Menampilkan rata-rata nilai
    printf("\nRata-rata nilai:\n");
    printf("Matematika: %.2f\n", ratarata_matkul[0]);
    printf("Fisika: %.2f\n", ratarata_matkul[1]);
    printf("Kimia: %.2f\n", ratarata_matkul[2]);
    printf("Rata-rata keseluruhan: %.2f\n", total_keseluruhan);

    return 0;
}
