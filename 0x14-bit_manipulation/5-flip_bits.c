#include "main.h"

/**
 * flip_bits - counts the number of bits that differ between two numbers
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 *
 * Return: the number of bits that are different between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits_diff = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num_bits_diff++;
		n >>= 1;
		m >>= 1;
	}

	return (num_bits_diff);
}


