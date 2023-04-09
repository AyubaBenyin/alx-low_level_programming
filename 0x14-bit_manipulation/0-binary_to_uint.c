#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	if (b == NULL)
		return 0;
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return 0;
		result = result * 2 + (*b - '0');
	}
	return (result);
}
