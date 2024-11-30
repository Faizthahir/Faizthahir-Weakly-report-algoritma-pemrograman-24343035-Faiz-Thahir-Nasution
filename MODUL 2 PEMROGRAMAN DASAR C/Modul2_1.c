#include <stdio.h>
#include <string.h>

int main()
{
    char nama[50];
    printf("Hello, siapa nama lengkapmu?\n");
    scanf("%[^n]s", nama);
    printf("Selamat Datang %s dalam pemrograman C!\n", nama);

    return 0;
}