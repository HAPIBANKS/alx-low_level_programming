#include "main.h"

/**
 *get_endianness - check the endianness
 * Return: 0 if big enidan, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j;

	j = (char *) &i;

	return ((int)*j);
}
