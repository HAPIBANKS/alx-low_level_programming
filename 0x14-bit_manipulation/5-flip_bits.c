#include "main.h"

/**
 *flip_bits - flit bits
 *@n: unsigned long integer
 *@m:unsigned long integer
 *Return: return unsigned integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int sum = 0;

	xor = n ^ m;
	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}
	return (sum);
}
