#include <stdio.h>

int main()
{
    float rupiah;
    float dollar;
    const float kurs = 14250;

    printf("masukkan jumlah mata uang dalam rupiah");
    scanf("%f", &rupiah);
    dollar = rupiah/kurs;

    printf("mata uang dalam dollar adalah :%.2f", dollar);
}