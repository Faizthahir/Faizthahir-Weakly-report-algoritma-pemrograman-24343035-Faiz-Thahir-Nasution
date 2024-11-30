#include <stdio.h>

float luas(float radius) {
    return 3.14 * radius * radius; 
}

float keliling(float radius) {
    return 2 * 3.14 * radius; 
}

int main() {
    float radius;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    float hasilLuas = luas(radius);
    float hasilKeliling = keliling(radius);

    printf("Luas lingkaran: %.2f\n", hasilLuas);
    printf("Keliling lingkaran: %.2f\n", hasilKeliling);

    return 0;
}