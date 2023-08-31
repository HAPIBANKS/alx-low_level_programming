#include "main.h"

/**
 *binary_to_uint - convert a binary number to an unsigned int
 *@b: pointer to a string
 *Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j, base_two;

	if (!b)
	{
	return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	;
	for (j--, base_two = 1; j >= 0; j--, base_two *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] & 1)
		{
			i += base_two;
		}
	}
	return (i);
}
