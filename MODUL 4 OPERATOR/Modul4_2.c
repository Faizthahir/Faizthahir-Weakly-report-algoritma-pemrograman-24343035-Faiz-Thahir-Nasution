#include <stdio.h>

int main()
{
    char r[64];
    char namabarang[64];
    int hargasatuan;
    int jumlahbarang;
    int jumlahtotal;

    printf("nama pembeli");
    scanf(" %63[^\n]s", r);
    printf("nama barang");
    scanf(" %63[^\n]s", namabarang);
    printf("berapa harga satuan");
    scanf("%d", &hargasatuan);
    printf("berapa jumlah barang");
    scanf("%d", &jumlahbarang);
    
    jumlahtotal = (hargasatuan * jumlahbarang);
    printf("nama pembeli    :%s\n", r);
    printf("nama barang     :%s\n", namabarang);
    printf("harga satuan    :%d\n", hargasatuan);
    printf("jumlah barang   :%d\n", jumlahbarang);
    printf("jumlah total    :%d\n", jumlahtotal);

    return 0;
}