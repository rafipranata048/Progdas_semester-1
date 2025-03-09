#include <stdio.h>

int main() {
    int jumlah_mahasiswa, i, j;
    float nilai[100][3];              // Array untuk menyimpan nilai mahasiswa (100 mahasiswa, 3 mata kuliah)
    float ratarata_matkul[3] = {0, 0, 0};  // Array untuk menyimpan rata-rata setiap mata kuliah
    float total_kesulurahan = 0;      // Untuk rata-rata keseluruhan

    // Meminta input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);

    // Input nilai mahasiswa
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("\nMasukkan nilai mahasiswa ke-%d (Matematika, Fisika, Kimia):\n", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &nilai[i][j]);
        }
    }

    // Menghitung rata-rata per mata kuliah
    for (j = 0; j < 3; j++) { // Untuk setiap mata kuliah
        for (i = 0; i < jumlah_mahasiswa; i++) { // Untuk setiap mahasiswa
            ratarata_matkul[j] += nilai[i][j];
        }
        ratarata_matkul[j] /= jumlah_mahasiswa; // Rata-rata per mata kuliah
    }

    // Menghitung rata-rata keseluruhan
    total_kesulurahan = (ratarata_matkul[0] + ratarata_matkul[1] + ratarata_matkul[2]) / 3;

    // Menampilkan tabel nilai mahasiswa
    printf("\nData Nilai Ujian:\n");
    printf("Mahasiswa   Matematika   Fisika   Kimia\n");
  //  printf("----------------------------------------\n");
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Mhs %-9d", i + 1); // Menampilkan nomor mahasiswa dengan lebar 10 karakter
        for (j = 0; j < 3; j++) {
            printf("%10.2f", nilai[i][j]); // Menampilkan nilai dengan lebar 10 karakter dan 2 angka desimal
        }
        printf("\n");
    }

    // Menampilkan rata-rata nilai
    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", ratarata_matkul[0]);
    printf("Fisika:     %.2f\n", ratarata_matkul[1]);
    printf("Kimia:      %.2f\n", ratarata_matkul[2]);
    printf("Rata-rata Keseluruhan: %.2f\n", total_kesulurahan);

    return 0;
}
