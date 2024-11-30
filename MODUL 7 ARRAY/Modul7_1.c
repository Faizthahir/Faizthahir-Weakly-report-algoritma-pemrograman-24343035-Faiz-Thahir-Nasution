#include <stdio.h>

int main () 
{
 int nilai[20] = {85,87,90,89,92,100,100,100,91,85,99,98,95,87,83,85,78,81,80,96};
 int length = sizeof(nilai)/sizeof(*nilai);
 int sum = 0;

 for (int i = 0; i < length; i++) {
    sum += nilai[i];
 }

    float rata_rata = sum / length;

    printf("Rata rata  nilai adalah:  %.2f", rata_rata);

    return 0;
}