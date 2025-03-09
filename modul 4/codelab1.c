#include <stdio.h>

int main() {
  int bilangan, total = 0, jumlah = 0;
  float rata_rata;

  printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
  scanf("%d", &bilangan);

  while (bilangan >= 0) {
    total += bilangan;
    jumlah++;
    printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
    scanf("%d", &bilangan);
  }

  if (jumlah > 0) {
    rata_rata = (float)total / jumlah;
    printf("Total bilangan: %d\n", total);
    printf("Rata-rata bilangan: %.2f\n", rata_rata);
  } else {
    printf("Tidak ada bilangan yang dimasukkan.\n");
  }

  return 0;
}