#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to result or 0 if result cannot be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, sum, carry = 0;

	for (l1 = 0; n1[l1]; l1++)
		;
	for (l2 = 0; n2[l2]; l2++)
		;
	if (l1 >= size_r || l2 >= size_r || size_r <= (l1 + 1) || size_r <= (l2 + 1))
		return (0);
	r[size_r - 1] = '\0';
	for (i = l1 - 1, j = l2 - 1, k = size_r - 2; i >= 0 || j >= 0; i--, j--, k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	if (carry)
	{
		if (size_r <= (l1 + 1) || size_r <= (l2 + 1))
			return (0);
		r[k--] = carry + '0';
	}
	return (r + k + 1);
}

