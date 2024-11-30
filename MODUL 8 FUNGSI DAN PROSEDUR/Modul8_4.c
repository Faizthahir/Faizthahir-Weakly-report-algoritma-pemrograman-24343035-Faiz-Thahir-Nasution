#include <stdio.h>

float potong(float totalPembelian) {
    float diskon = 0;

    if (totalPembelian > 3000000) {
        diskon = 0.35;
    } else if (totalPembelian > 1000000) {
        diskon = 0.20;
    } else {
        diskon = 0;
    }

    return totalPembelian * diskon; 
}

int main() {
    float totalPembelian, besarDiskon, totalBayar;

    printf("Program Hitung Potongan\n");

    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);

    besarDiskon = potong(totalPembelian);

    totalBayar = totalPembelian - besarDiskon;

    printf("Besar Diskon: Rp. %.2f\n", besarDiskon);
    printf("Besar Yang Harus Dibayarkan: Rp. %.2f\n", totalBayar);

    return 0;
}