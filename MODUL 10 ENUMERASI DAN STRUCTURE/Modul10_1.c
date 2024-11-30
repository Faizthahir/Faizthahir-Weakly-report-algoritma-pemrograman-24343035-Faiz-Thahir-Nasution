#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Game {
    int angkaTebakan;
    int tebakan;
    int percobaan;
};

int main() {
    struct Game game; 
    char mainLagi;

    srand(time(NULL));

    do {
        game.angkaTebakan = rand() % 20 + 1;
        game.percobaan = 0;

        printf("Saya telah memilih nomor antara 1 dan 20. Coba tebak nomor saya!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &game.tebakan);
            game.percobaan++;

            if (game.tebakan < game.angkaTebakan) {
                printf("Nomor saya lebih besar!\n");
            } else if (game.tebakan > game.angkaTebakan) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar! Nomor saya adalah %d.\n", game.angkaTebakan);
                printf("Anda membutuhkan %d percobaan untuk menebak nomor tersebut.\n", game.percobaan);
            }
        } while (game.tebakan != game.angkaTebakan);

        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &mainLagi);
    } while (mainLagi == 'y' || mainLagi == 'Y');

    printf("Terima kasih telah bermain!\n");
    return 0;
}