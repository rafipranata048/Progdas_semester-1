#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char unique[100];
    int i, j, k = 0;

    printf("Masukkan sebuah string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = 0; j < k; j++) {
            if (str[i] == unique[j]) {
                break;
            }
        }
        if (j == k) {
            unique[k] = str[i];
            k++;
        }
    }

    // Mencetak karakter unik
    printf("%s\n", unique);

    return 0;
}