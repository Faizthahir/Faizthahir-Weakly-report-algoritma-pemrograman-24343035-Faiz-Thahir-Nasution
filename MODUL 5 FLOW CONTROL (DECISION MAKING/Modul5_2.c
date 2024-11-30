#include <stdio.h>

int main () 
{
    char namaPembeli[64];
    float totalPembelian;
    float diskon = 0.0;
    float totalSetelahdiskon;
    float cashback = 0.0;

    printf("Maasukkan nama pembeli: ");
    fgets(namaPembeli, sizeof(namaPembeli), stdin);
    
    printf("Masukkan totall pembelian: Rp");
    scanf("%f", &totalPembelian);

    if (totalPembelian <= 75000) {
        diskon = totalPembelian * 0.05; //diskon 5%
    } if (totalPembelian >= 75000) {
        diskon = totalPembelian * 0.15; //diskon 15%
    } if (totalPembelian >= 125000) {
        diskon = totalPembelian * 0.25; //diskon 25%
        cashback = 5000;
    }

    totalSetelahdiskon = totalPembelian - diskon + cashback;

    printf("\n === Struk Pembelian TOSERBA === \n");
    printf("Nama pembeli: %s", namaPembeli);
    printf("Total pembelian:Rp %2.f\n", totalPembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    printf("Cashback: Rp %.2f\n", cashback);
    printf("Total Yang harus dibayarkan: Rp %.2f\n", totalSetelahdiskon);

    return 0;

}