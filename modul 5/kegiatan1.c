#include <stdio.h>
#include <string.h>

int main() {
    int jumlah;
    char buah[10][50], temp[50]; //memiliki tipe data char untuk menyimpan buah maksimal 10 dgn panjang msing2 50 karakter
    //kemudian memiliki variabel temp  untuk menyimpan karakter sementara pada proses pengurutan nama buah

    // Meminta jumlah buah
    printf("Masukkan jumlah buah (maksimal 10): ");
    scanf("%d", &jumlah);

    // Input nama buah
    for (int i = 0; i < jumlah; i++) { //melakukan perullangan pertama dgn inisialiasi awal 0 dan akan melakukan perulangan 
	//sesuai dgn input yg kita masukan
        printf("Masukkan nama buah ke-%d: ", i + 1);
        scanf("%s", buah[i]); //menyimpang string nama buah dan akan disimpan kedalam variabel buah[i]
    }

    // Tampilkan buah sesuai urutan input
    printf("\nNama buah dalam urutan yang diinputkan:\n");
    for (int i = 0; i < jumlah; i++) { //perulangan ke 2 dgn menampilkan hasil urutan buah sesuai dgn inputan
        printf("%s\n", buah[i]);
    }

    // Urutkan buah secara abjad
    for (int i = 0; i < jumlah ; i++) {
        for (int j = i + 1; j < jumlah; j++) {
            if (strcmp(buah[i], buah[j]) > 0 ) { //membandingkan ke2 string buah [i] dan [j] dgn menggunakan strcmp 
			//jika hasilnya lebih besar dari 0 artinya buah[i] lebih besar daripada buah[j] secara alfabetis), 
			//maka nama buah tersebut akan dipertukarkan 
			//jd akan diperiksa sesuai dgn inputan missal 0=jeruk 1=apel maka akan ditukar sesuai dengan abjad
                strcpy(temp, buah[i]); //menyalin string menggunakan strcpy menyalin nilai string yang ada pada buah[i] ke dalam variabel tempdg memanggil variabel temp dan buah[1]
                strcpy(buah[i], buah[j]); ////menyalin string menggunakan strcpy dg memanggil variabel buah[i] dan buah[j]
                strcpy(buah[j], temp); //menyalin string menggunakan strcpy dg memanggil variabel buah[j] dan temp
            }
        }
    }

    // Tampilkan buah dalam urutan abjad
    printf("\nNama buah dalam urutan abjad:\n");
    for (int i = 0; i < jumlah; i++) { //perulangan urutan buah sesuai abjad sesuai dgn inputan yg kita masukan
        printf("%s\n", buah[i]); //menampiklan hasil pengurutan buah sesuai abjad dgn memanggil variabel buah[i]
    }

    return 0;
}