#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: a pointer to the unsigned long integer to modify.
 * @index: the index of the bit to modify.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 * If the given index is greater than the maximum bit index of the input
 * unsigned long integer, the function returns -1 and does not modify the value.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;
	*n |= mask;

	return (1);
}

