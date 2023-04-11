#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: a pointer to the unsigned long integer to modify.
 * @index: the index of the bit to modify.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 * If the given index is greater than the maximum bit index of the input
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;

	if (*n & mask)
		*n ^= mask;

	return (1);
}

