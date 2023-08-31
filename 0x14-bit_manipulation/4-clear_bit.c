#include "main.h"

/**
 *clear_bit - set the value of a bit to 0
 *@n: unsigned long integer n
 *@index: unsigned integer index
 *Return: 1 if successful but -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	bitmask = 1;
	bitmask = bitmask << index;
	bitmask = ~bitmask;
	*n = *n & bitmask;

	return (1);
}
