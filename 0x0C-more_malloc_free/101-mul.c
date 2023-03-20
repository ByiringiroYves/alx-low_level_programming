#include "main.h"
#include <stdlib.h>

/**
* _puts - prints a string, followed by a new line,
* @str: pointer to the string to print
* Return: void
*/
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
}

/**
* is_digit - checks if a string contains only digits
* @str: pointer to the string to check
* Return: 1 if all characters in str are digits, 0 otherwise
*/
int is_digit(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}

/**
* _atoi - convert a string to an integer.
* @s: char type string
* Return: integer converted
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int resp = 0, firstNum, i;

for (firstNum = 0; !(s[firstNum] >= '0' && s[firstNum] <= '9'); firstNum++)
{
if (s[firstNum] == '-')
sign *= -1;
}
for (i = firstNum; s[i] >= '0' && s[i] <= '9'; i++)
{
resp *= 10;
resp += (s[i] - '0');
}
return (sign *resp);
}

/**
* print_int - prints an integer.
* @n: int
* Return: void
*/
void print_int(unsigned int n)
{
unsigned int divisor = 1, i, resp;

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}

/**
* main - multiply two positive numbers and print the result
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 98 on failure
*/
int main(int argc, char const *argv[])
{
unsigned int num1, num2;

if (argc != 3)
{
_puts("Error");
_putchar('\n');
exit(98);
}

if (!is_digit((char *)argv[1]) || !is_digit((char *)argv[2]))
{
_puts("Error");
_putchar('\n');
exit(98);
}

num1 = _atoi((char *)argv[1]);
num2 = _atoi((char *)argv[2]);

print_int(num1 *num2);
_putchar('\n');

return (0);
}

