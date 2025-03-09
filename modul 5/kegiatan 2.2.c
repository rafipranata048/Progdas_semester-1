#include <stdio.h>

int main() {
    int num_students, i, j;
    float nilai[100][3]; // Array untuk menyimpan nilai [mahasiswa][matkul]
    float rata_matkul[3] = {0, 0, 0}; // Menyimpan rata-rata setiap mata kuliah
    float rata_total = 0; // Rata-rata total

    // Meminta input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &num_students);

    // Input nilai mahasiswa
    for (i = 0; i < num_students; i++) {
        printf("\nMasukkan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia):\n", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &nilai[i][j]);
        }
    }

    // Menghitung rata-rata
    for (j = 0; j < 3; j++) { // Untuk setiap mata kuliah
        for (i = 0; i < num_students; i++) { // Untuk setiap mahasiswa
            rata_matkul[j] += nilai[i][j];
        }
        rata_matkul[j] /= num_students; // Rata-rata per mata kuliah
    }
    rata_total = (rata_matkul[0] + rata_matkul[1] + rata_matkul[2]) / 3; // Rata-rata total

    // Menampilkan tabel nilai mahasiswa
    printf("\nData Nilai Ujian:\n");
    printf("Mahasiswa    Matematika    Fisika    Kimia\n");
    for (i = 0; i < num_students; i++) {
        printf("Mhs %-9d", i + 1); // Lebar 10 karakter untuk nomor mahasiswa
        for (j = 0; j < 3; j++) {
            printf("%10.2f", nilai[i][j]); // Lebar 10 karakter untuk setiap nilai dan 2 digit desimal
        }
        printf("\n");
    }

    // Menampilkan rata-rata nilai
    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", rata_matkul[0]);
    printf("Fisika:     %.2f\n", rata_matkul[1]);
    printf("Kimia:      %.2f\n", rata_matkul[2]);
    printf("Rata-rata Keseluruhan: %.2f\n", rata_total);

    return 0;
}