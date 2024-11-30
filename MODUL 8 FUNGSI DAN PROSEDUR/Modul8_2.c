#include <stdio.h>

float penjumlahan(float a, float b) {
    return a + b;
}
float pengurangan(float a, float b) {
    return a - b;
}
float perkalian(float a, float b) {
    return a * b;
}
float pembagian(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
}

int main() {
    float bilangan1, bilangan2;
    int pilihan;

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bilangan1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bilangan2);

    printf("\nPilih operasi aritmetik:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Hasil Penjumlahan: %.2f\n", penjumlahan(bilangan1, bilangan2));
            break;
        case 2:
            printf("Hasil Pengurangan: %.2f\n", pengurangan(bilangan1, bilangan2));
            break;
        case 3:
            printf("Hasil Perkalian: %.2f\n", perkalian(bilangan1, bilangan2));
            break;
        case 4:
            printf("Hasil Pembagian: %.2f\n", pembagian(bilangan1, bilangan2));
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}