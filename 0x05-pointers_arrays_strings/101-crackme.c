#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char password[11];
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        password[i] = charset[rand() % sizeof(charset)];
    }
    password[10] = '\0';

    printf("%s\n", password);

    return 0;
}
