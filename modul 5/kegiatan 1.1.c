#include <stdio.h>
#include <string.h>

int main (){
	int jumlah;
	char buah [10][50], sementara[50];
	
	printf("masukan jumlah buah (maksimal 10): ");
	scanf("%d", &jumlah);
	
	for ( int i = 0; i < jumlah; i++){
		printf("masukan nama buah ke-%d: ", i + 1);
		scanf("%s", buah[i]);
		
	}
	printf("\nNama buah dalam urutan yang diinputkan:\n");
	for ( int i = 0; i < jumlah; i++){
		printf("%s\n", buah[i]);
	}

	for ( int i = 0; i < jumlah; i++){
		for ( int j = i + 1; j < jumlah; j++){
			if (strcmp (buah[i], buah[j]) > 0){
				strcpy(sementara, buah[i]); //mengcopy buah i ke variabel sementara
				strcpy(buah[i], buah[j]);
				strcpy(buah[j], sementara);
			}
		}
	}
	
	printf("\nNama buah dalam urutan abjad:\n");
	for (int i = 0; i < jumlah; i++){
		printf("%s\n", buah[i]);
	}
	return 0;
}