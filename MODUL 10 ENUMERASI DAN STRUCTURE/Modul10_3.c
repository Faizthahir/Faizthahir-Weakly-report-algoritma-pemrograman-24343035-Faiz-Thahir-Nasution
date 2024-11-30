#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100

struct Mahasiswa {
    char npm[15];
    char nama[50];
    char tgl_lahir[11];
    char alamat[100];
    char hp[15];
};

void tampilkanDataMahasiswa(struct Mahasiswa mhs[], int jumlah) {
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlah; i++) {
        printf("NPM: %s\n", mhs[i].npm);
        printf("Nama: %s\n", mhs[i].nama);
        printf("Tanggal Lahir: %s\n", mhs[i].tgl_lahir);
        printf("Alamat: %s\n", mhs[i].alamat);
        printf("HP: %s\n", mhs[i].hp);
        printf("\n");
    }
}

int main() {
    struct Mahasiswa mhs[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;
    char lagi;

    do {
        if (jumlahMahasiswa >= MAX_MAHASISWA) {
            printf("Data mahasiswa sudah penuh!\n");
            break;
        }

        printf("Masukkan NPM: ");
        scanf("%s", mhs[jumlahMahasiswa].npm);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", mhs[jumlahMahasiswa].nama);
        printf("Masukkan Tanggal Lahir (DD-MM-YYYY): ");
        scanf("%s", mhs[jumlahMahasiswa].tgl_lahir);
        printf("Masukkan Alamat: ");
        scanf(" %[^\n]", mhs[jumlahMahasiswa].alamat);
        printf("Masukkan HP: ");
        scanf("%s", mhs[jumlahMahasiswa].hp);

        jumlahMahasiswa++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);
    } while (lagi == 'y' || lagi == 'Y');

    tampilkanDataMahasiswa(mhs, jumlahMahasiswa);

    return 0;
}