#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    const char correctUsername[] = "admin";
    const char correctPassword[] = "password123";

    printf("Masukkan Username: ");
    scanf("%s", username);
    printf("Masukkan Password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}