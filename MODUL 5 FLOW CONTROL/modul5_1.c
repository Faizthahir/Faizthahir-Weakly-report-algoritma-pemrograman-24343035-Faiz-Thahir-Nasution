#include <stdio.h>

int main () 
{
    int pilihan;
    float angka1, angka2, hasil;

    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil bagi\n");

    printf("Pilih operasi (1-5)");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama:");
    scanf("%f", &angka1);
    printf("masukkan angka kedua:");
    scanf("%f", &angka2);

    switch (pilihan) {
        case 1 :
        hasil = angka1 + angka2;
        printf("Hasil penjumlahan: %.2f\n", hasil);
        break;
        case 2 :
        hasil = angka1 - angka2;
        printf("Hasil pengurangan: %.2f\n", hasil);
        break;
        case 3 :
        hasil = angka1 * angka2;
        printf("Hasil perkalian: %.2f\n", hasil);
        break;
        case 4 :
        if (angka2 != 0 ) {
        hasil = angka1 / angka2;
        printf("Hasil pembagian: %.2f\n", hasil);
            } else {
            printf("Hasil tidak terdefinisi:\n");
        }
        break;
        case 5 :
        if (angka2!= 0) {
            int hasilBagi = (int)angka1/(int)angka2;
            printf("Hasil bagi: %d\n");
            } else {
                printf("Eror: Pembagian dengan nol!\n");
         }
         break;
         default: 
         printf("Pilihan tidak valid!\n");

        }
         return 0;

}