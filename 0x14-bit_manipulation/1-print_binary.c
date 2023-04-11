#include "main.h"

/**
 * print_binary - prints the binary representation
 * of an unsigned long integer.
 * @n: the number to be converted.
 *
 * This function recursively prints the binary representation of an unsigned
 * long integer, starting from the most significant bit down to the least
 * significant bit. The binary digits are printed in the correct order to form
 * the binary representation of the number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}

