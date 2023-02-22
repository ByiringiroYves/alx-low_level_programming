#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void) {
    int a = 1, b = 2, i;

    printf("%d, %d", a, b);

    for (i = 2; i < 98; i++) {
        int c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
