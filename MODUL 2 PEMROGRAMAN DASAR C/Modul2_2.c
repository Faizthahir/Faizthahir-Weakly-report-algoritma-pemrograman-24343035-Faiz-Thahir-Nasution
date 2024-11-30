#include <stdio.h>

int main()
{
    char nama[64];
    int nim;
    char prodi[64];
    char fakultas[64];
    float nilaiPraktikum;
    float nilaiUts;
    float nilaiUas;
    float nilaiAkhir;

    printf("Masukkan nama");
    scanf("%63[^\n]s", nama);
    printf("Masukkan nim");
    scanf("%d", &nim);
    printf("Masukkan prodi");
    scanf("%63[^\n]s", prodi);
    printf("Masukkan fakultas");
    scanf("%63[^\n]s", fakultas);
    printf("Masukkan nilai praktikum");
    scanf("%f", &nilaiPraktikum);
    printf("masukkan nilai uts");
    scanf("%f", &nilaiUts);
    printf("Masukkan nilai uas");
    scanf("%f", &nilaiUas);

    nilaiAkhir = 0.3 * nilaiPraktikum + 0.3 * nilaiUts + 0.3 * nilaiUas + 0.3;

    printf("Nama            :%s", nama);
    printf("Nim             :%d", nim);
    printf("Prodi           :%s", prodi);
    printf("Fakultas        :%s", fakultas);
    printf("Nilai praktikum :%s", nilaiPraktikum);
    printf("Nilai uts       :%f", nilaiUts);
    printf("Nilai uas       :%f", nilaiUas);
    printf("Nilai akhir     :%f", nilaiAkhir);

    return 0;
}