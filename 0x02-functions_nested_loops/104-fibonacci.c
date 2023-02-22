#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void) {
int first = 1, second = 2, next;
    printf("%d, %d, ", first, second);

    for (int i = 3; i <= 98; i++) {
        next = first + second;
        printf("%d", next);
        if (i != 98) {
            printf(", ");
        }
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
