#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
    return isdigit(c) ? 1 : 0;
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;

    return len;
}

/**
 * _puts - Prints a string to stdout.
 * @s: The string to print.
 */
void _puts(char *s)
{
    while (*s)
        putchar(*s++);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int sign = 1, num = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;

        if (_isdigit(*s))
            num = num * 10 + (*s - '0');

        s++;
    }

    return sign * num;
}

/**
 * print_error - Prints an error message to stderr and exits with a status of 98.
 */
void print_error(void)
{
    _puts("Error\n");
    exit(98);
}

/**
 * main - Entry point for the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 98 if an error occurs.
 */
int main(int argc, char **argv)
{
    int i, len1, len2, carry, product;
    char *num1, *num2, *result;

    if (argc != 3)
        print_error();

    num1 = argv[1];
    num2 = argv[2];
    len1 = _strlen(num1);
    len2 = _strlen(num2);

    for (i = 0; i < len1; i++)
        if (!_isdigit(num1[i]))
            print_error();

    for (i = 0; i < len2; i++)
        if (!_isdigit(num2[i]))
            print_error();

    result = calloc(len1 + len2 + 1, sizeof(char));
    if (!result)
        return 1;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }

        result[i] += carry;
    }

    for (i = 0; result[i] == 0 && i < len1 + len2 - 1; i++)
        ;

    for (; i < len1 + len2; i++)
        putchar(result[i] + '0');

    putchar('\n');

    free(result);

    return 0;
}
