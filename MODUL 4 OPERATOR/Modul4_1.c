#include <stdio.h>

int main () 
{
    int jam;
    int menit;
    int detik ;
    printf("masukkan waktu dalam detik");
    scanf("%d", &detik);
    jam = detik/3600;
    menit = (detik/60) %60;
    detik = detik %60;
    printf("%d Jam, %d Menit, %d Detik\n", jam,menit,detik);
}