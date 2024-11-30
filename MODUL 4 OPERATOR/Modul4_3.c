#include <stdio.h>

int main ()
{
    float presensi, praktek, uts, uas, nilaiakhir;
    char nama [100], prodi[100], nim[100];

    printf("masukkan nama:");
    scanf("%s", nama);
    printf("masukkan nim:");
    scanf("%s", nim);
    printf("masukkan prodi:");
    scanf("%s", prodi);
    printf("masukkan nilai presensi:");
    scanf("%f", &presensi);
    printf("masukkan nilai praktek");
    scanf("%s", &praktek);
    printf("masukkan nilai uts:");
    scanf("%f", &uts);
    printf("masukkan nilai uas");
    scanf("%f", &uas);

    nilaiakhir = (0.1*presensi) + (0.2*praktek) + (0.3*uts) + (0.4*uas);

    printf("Nama            :%.2f\n", nama);
    printf("NIM             :%.2f\n", nim);
    printf("Prodi           :%.2f\n", prodi);
    printf("Nilai Presensi  :%.2f\n", presensi);
    printf("Nilai praktek   :%.2f\n", praktek);
    printf("Nilai UAS       :%.2f\n", uts);
    printf("Nilai UAS       :%.2f\n", uas);
    printf("Nilai akhir     :%.2f\n", nilaiakhir);
}