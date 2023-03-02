#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, len1, len2, len_sum;

	/* get lengths of n1 and n2 */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* check if result can fit in r */
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	/* add digits from right to left */
	i = len1 - 1;
	j = len2 - 1;
	k = len_sum = carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		int d1 = i >= 0 ? n1[i] - '0' : 0;
		int d2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = d1 + d2 + carry;

		if (k >= size_r - 1)
			return (0); /* result can't fit in r */
		r[k++] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
		len_sum++;
	}
	r[k] = '\0';

	/* reverse result */
	for (i = 0, j = len_sum - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	return (r);
}
