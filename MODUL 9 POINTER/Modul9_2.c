#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char kalimat[MAX_LENGTH];
    char terbalik[MAX_LENGTH];
    int i, j;

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = 0;


    int panjang = strlen(kalimat);

    for (i = 0, j = panjang - 1; i < panjang; i++, j--) {
        terbalik[i] = kalimat[j];
    }
    terbalik[panjang] = '\0'; 

    printf("Kebalikannya: %s\n", terbalik);

    return 0;
}