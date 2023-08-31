#include "main.h"

/**
 * set_bit - set bit value to 1 at a given index
 * @n: unsigned lond integer
 * @index: unsigned integer index
 * Return: 1 if it worked and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	bitmask = 1;
	*n = *n | (bitmask << index);

	return (1);
}
