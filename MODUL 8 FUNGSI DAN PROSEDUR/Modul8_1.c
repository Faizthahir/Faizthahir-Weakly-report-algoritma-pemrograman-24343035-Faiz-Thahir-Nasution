#include <stdio.h>


int perkalian(int a, int b) {

    if (b == 0) {
        return 0;
    }
    return a + perkalian(a, b - 1);
}

int main() {
    int bilangan1, bilangan2;

    printf("Masukkan bilangan bulat positif pertama: ");
    scanf("%d", &bilangan1);
    printf("Masukkan bilangan bulat positif kedua: ");
    scanf("%d", &bilangan2);

    int hasil = perkalian(bilangan1, bilangan2);
    printf("%d x %d = %d\n", bilangan1, bilangan2, hasil);

    return 0;
}