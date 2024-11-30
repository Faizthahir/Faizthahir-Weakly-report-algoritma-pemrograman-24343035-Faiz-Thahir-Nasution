#include <stdio.h>

int main() {
    char *words[] = {"D", "ND", "AND", "LAND", "RLAND", "ORLAND", "BORLAND"};
    int i;

    for (i = 0; i < 7; i++) {
        printf("%s\n", *(words + i));
    }

    return 0;
}