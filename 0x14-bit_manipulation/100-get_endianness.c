#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * This function checks the endianness of the machine it is running on,
 * and returns 0 if it is big endian, or 1 if it is little endian.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}

