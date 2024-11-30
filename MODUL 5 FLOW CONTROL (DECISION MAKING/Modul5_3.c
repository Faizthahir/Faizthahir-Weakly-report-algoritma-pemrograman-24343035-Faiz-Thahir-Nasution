#include <stdio.h>
#include <math.h>

#define PHI 3.14159 // Konstanta phi

int main() {
    int pilihan;
    float luas_permukaan;
    float radius, sisi, panjang, lebar, tinggi;

    // Menampilkan menu pilihan
    printf("=== Kalkulator Luas Permukaan ===\n");
    printf("Pilih bangun ruang:\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            // Luas Permukaan Bola
            printf("Masukkan radius bola: ");
            scanf("%f", &radius);
            luas_permukaan = 4 * PHI * radius * radius; // Rumus luas permukaan bola
            printf("Luas Permukaan Bola: %.2f\n", luas_permukaan);
            break;

        case 2:
            // Luas Permukaan Kubus
            printf("Masukkan sisi kubus: ");
            scanf("%f", &sisi);
            luas_permukaan = 6 * sisi * sisi; // Rumus luas permukaan kubus
            printf("Luas Permukaan Kubus: %.2f\n", luas_permukaan);
            break;

        case 3:
            // Luas Permukaan Balok
            printf("Masukkan panjang balok: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar balok: ");
            scanf("%f", &lebar);
            printf("Masukkan tinggi balok: ");
            scanf("%f", &tinggi);
            luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi); // Rumus luas permukaan balok
            printf("Luas Permukaan Balok: %.2f\n", luas_permukaan);
            break;

        case 4:
            // Luas Permukaan Tabung
            printf("Masukkan radius tabung: ");
            scanf("%f", &radius);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &tinggi);
            luas_permukaan = 2 * PHI * radius * (radius + tinggi); // Rumus luas permukaan tabung
            printf("Luas Permukaan Tabung: %.2f\n", luas_permukaan);
            break;

        default:
            printf("Pilihan tidak valid. Silakan pilih antara 1-4.\n");
            break;
    }

    return 0;
}
