#include <stdio.h>

int main() {
    int menu;
    float saldo = 175000; // Saldo awal Hattori
    float setoran, penarikan;

    printf("No Rek: 0123\n");
    printf("Nama Akun: Hatori\n");
    printf("Saldo ATM: Rp. %.2f\n", saldo);

    do {
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Saldo Hattori saat ini: Rp. %.2f\n", saldo);
                break;

            case 2:
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%f", &setoran);
                saldo += setoran; // Menambah saldo dengan setoran
                printf("Setoran berhasil. Saldo saat ini: Rp. %.2f\n", saldo);
                break;

            case 3:
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%f", &penarikan);
                
                // Memastikan saldo minimal
                if (saldo - penarikan < 50000) {
                    printf("Penarikan gagal. Saldo tidak cukup. Saldo minimal harus Rp. 50.000.\n");
                } else {
                    saldo -= penarikan; // Mengurangi saldo dengan penarikan
                    printf("Penarikan berhasil. Saldo saat ini: Rp. %.2f\n", saldo);
                }
                break;

            case 4:
                printf("Terima kasih telah menggunakan ATM.\n");
                break;

            default:
                printf("Menu tidak valid. Silakan pilih menu yang tersedia.\n");
        }
    } while (menu != 4);

    return 0;
}