#include <stdio.h>
int main (){
	int jumlah_mahasiswa, i,j;
	float nilai [100][3];
	float ratarata_matkul[3];
	float total_keseluruhan = 0;
	//i = juml mhs j=matkul
	printf("masukan jumlah mahasiswa: ");
	scanf("%d", &jumlah_mahasiswa);
	
	for (i=0; i < jumlah_mahasiswa; i++){
		printf("\nmasukan nilai mahasiswa ke %d (matematika, fisika, kimia):\n", i+1);
		for (j=0; j < 3; j++){
			scanf("%f", &nilai[i][j]);
		}
	}
	// menghitung rata2 matkul
	for (j=0; j < 3; j++ ){
		for (i=0; i < jumlah_mahasiswa; i++){
			ratarata_matkul[j] += nilai[i][j];
		}
		ratarata_matkul[j] /= jumlah_mahasiswa;
	}
	total_keseluruhan = (ratarata_matkul[0] + ratarata_matkul [1] + ratarata_matkul [2]) / 3;
	
	printf("\ndata nilai ujian:\n");
	printf("mahasiswa\tmatematika\tfisika\t\tkimia\n");
	for (i = 0; i < jumlah_mahasiswa; i++) {
    printf("mahasiswa %d\t", i + 1); 
    for (j = 0; j < 3; j++) {
        printf("%.2f\t\t", nilai[i][j]); 
    }
    printf("\n");
}

	printf("\nrata-rata nilai:\n");
	printf("matematika: %.2f\n", ratarata_matkul[0]);
	printf("fisika: %.2f\n", ratarata_matkul[1]);
	printf("kimia: %.2f\n", ratarata_matkul[2]);
	printf("rata-rata keseluruhan: %.2f\n", total_keseluruhan);
	
	return 0;
}