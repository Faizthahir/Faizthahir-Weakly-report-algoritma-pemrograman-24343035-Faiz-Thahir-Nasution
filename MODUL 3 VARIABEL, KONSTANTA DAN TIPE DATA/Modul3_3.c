#include <stdio.h>

int main () 
{
    float d = 12;
    const float PI =  3.14;
    float r = d/2;
    float volume = 4.0/3.0 * PI * r * r * r;
    float luaspermukaanbola = 4 * PI * r * r;

    printf("volume: %2f\n", volume);
    printf("luas permukaan bola: %2f\n", luaspermukaanbola);

}