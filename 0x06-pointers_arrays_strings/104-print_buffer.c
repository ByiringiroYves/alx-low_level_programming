#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer to print
 * @size: Size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (j + i >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + j));

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (j + i >= size)
				break;
			if (*(b + i + j) >= ' ' && *(b + i + j) <= '~')
				printf("%c", *(b + i + j));
			else
				printf(".");
		}

		printf("\n");
	}
}
