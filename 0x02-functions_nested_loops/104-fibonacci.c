#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main() {
    unsigned long a = 1, b = 2;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 3; i <= 98; i++) {
        unsigned long c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
