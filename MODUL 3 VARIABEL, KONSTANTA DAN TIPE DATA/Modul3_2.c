#include <stdio.h>

int main () 
{
    float c, f, k, r;

    printf("masukkan nilai suhu dalam celcius");
    scanf("%f", &c);
    k = c + 273.15; 
    f = (c * 1.8) + 32; 
    r = c * 0.8 ;

    printf("Suhu dalam kelvin:%.2f\n", k);
    printf("Suhu dalam fahrenheit:%.2f\n", f);
    printf("Suhu dalam reamur:%.2f\n", r);
}