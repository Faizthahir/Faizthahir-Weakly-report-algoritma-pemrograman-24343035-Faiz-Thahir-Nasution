#include <stdio.h>

#define MAX_MAHASISWA 100

struct Mahasiswa {
    char nama[50];
    char nim[15];
    char jurusan[50];
    char prodi[50];
};

int main() {
    struct Mahasiswa mhs[MAX_MAHASISWA];
    int jumlahMahasiswa;
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    FILE *file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Error membuka file!\n");
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan data mahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        scanf(" %[^\n]", mhs[i].nama);
        printf("NIM: ");
        scanf("%s", mhs[i].nim);
        printf("Jurusan: ");
        scanf(" %[^\n]", mhs[i].jurusan);
        printf("Program Studi: ");
        scanf(" %[^\n]", mhs[i].prodi);
        fprintf(file, "Mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama: %s\n", mhs[i].nama);
        fprintf(file, "NIM: %s\n", mhs[i].nim);
        fprintf(file, "Jurusan: %s\n", mhs[i].jurusan);
        fprintf(file, "Program Studi: %s\n\n", mhs[i].prodi);
    }

    fclose(file);
    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}