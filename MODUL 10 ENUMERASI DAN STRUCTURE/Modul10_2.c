#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[20];
    int mulai; 
    int akhir;
} Zodiak;

int main() {
   
    Zodiak zodiaks[] = {
        {"CAPRICORN", 120, 119}, 
        {"AQUARIUS", 120, 218},  
        {"PISCES", 219, 320},   
        {"ARIES", 321, 419},     
        {"TAURUS", 420, 520},    
        {"GEMINI", 521, 620},   
        {"CANCER", 621, 722},
        {"LEO", 723, 822},
        {"VIRGO", 823, 922},   
        {"LIBRA", 923, 1022},    
        {"SCORPIO", 1023, 1121}, 
        {"SAGITTARIUS", 1122, 1219}
    };

    int tgl, bln, thn;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    int bulan_hari = bln * 100 + tgl;

    for (int i = 0; i < sizeof(zodiaks) / sizeof(zodiaks[0]); i++) {
        if (bulan_hari >= zodiaks[i].mulai && bulan_hari <= zodiaks[i].akhir) {
            printf("Zodiak Anda adalah : %s\n", zodiaks[i].nama);
            break;
        }
    }

    return 0;
}