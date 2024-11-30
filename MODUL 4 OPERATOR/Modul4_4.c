#include <stdio.h>

int main ()
{
    int durasi = 3;
    int durasiJam;
    float tarifSatujamPertama = 15000;
    float tarifSatujamBerikutnya = tarifSatujamPertama * 0.5;
    float totalBiaya;
    totalBiaya = tarifSatujamPertama + (durasi-1) * tarifSatujamBerikutnya;

    printf("total biaya untuk menonton 3 jam adalah : Rp %.2f\n", totalBiaya);
}