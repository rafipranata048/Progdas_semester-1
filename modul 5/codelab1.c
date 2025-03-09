#include <stdio.h>
#include <string.h>

int main() {
    
    char namaSiswa[5][20] = {"Alice", "Bob", "Charlie", "David", "Eva"}; 
    
    int nilaiUjian[5] = {85, 90, 78, 92, 88}; 

    
    printf("Daftar siswa dan nilai sebelum diubah:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", namaSiswa[i], nilaiUjian[i]); 
    }
    
    int indeksSiswa = 3;
   
    int nilaiBaru = 95;
    
    nilaiUjian[indeksSiswa] = nilaiBaru;
    
    printf("\nDaftar siswa dan nilai setelah diubah:\n");
    for (int i = 0; i < 5; i++) { 
        printf("%s: %d\n", namaSiswa[i], nilaiUjian[i]);
    }

    return 0;
}
