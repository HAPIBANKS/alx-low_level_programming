#include "main.h"

/**
 *get_bit -return the value of a bit at a given index 
 *@n: unsigned long integer
 *@index: unsigned long integer index
 *Return: return the value of the bit as an integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
