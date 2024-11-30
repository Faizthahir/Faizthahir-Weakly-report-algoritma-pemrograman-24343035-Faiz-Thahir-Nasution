#include <stdio.h>

int main() {
    int Lesley = 57082;
    int Layla = Lesley; 
    int Balmond = Layla + 1; 

    printf("Pertanyaan A:\n");
    printf("a) Nilai Layla: %d\n", Layla); 
    printf("b) Nilai Balmond: %d\n", Balmond); 

    int *LaylaPointer = &Lesley; 
    int BalmondPointer = *LaylaPointer + 1;

    printf("Pertanyaan B:\n");
    printf("a) Nilai Layla: %p\n", (void *)LaylaPointer); 
    printf("b) Nilai Balmond: %d\n", BalmondPointer);
    return 0;
}