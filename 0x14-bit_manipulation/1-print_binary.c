#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	while ((n >> len) > 0)
		len++;

	while (len--)
	{
		_putchar((n & (mask << len)) ? '1' : '0');
	}
}
