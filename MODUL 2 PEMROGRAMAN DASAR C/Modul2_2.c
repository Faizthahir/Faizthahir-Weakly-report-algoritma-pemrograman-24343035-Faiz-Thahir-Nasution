#include <stdio.h>
#include <string.h>

int main() {
  char nama[100];
  char nim[100];
  char prodi[100];
  char fakultas[100];

  // Input nama
  printf("Masukkan nama: ");
  scanf("%s", nama);

  // Input nim
  printf("Masukkan nim: ");
  scanf("%s", nim);

  // Input prodi
  printf("Masukkan prodi: ");
  scanf("%s", prodi);

  // Input fakultas
  printf("Masukkan fakultas: ");
  scanf("%s", fakultas);

  // Output data
  printf("\nData Mahasiswa:\n");
  printf("Nama: %s\n", nama);
  printf("NIM: %s\n", nim);
  printf("Program Studi: %s\n", prodi);
  printf("Fakultas: %s\n", fakultas);

  return 0;
}