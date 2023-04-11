#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = 1, check;
	int flag = 0;

	while (divisor > 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');

		divisor >>= 1;
	}
	if (!flag)
		_putchar('0');
}

