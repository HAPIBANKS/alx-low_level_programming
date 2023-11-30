#include "hash_tables.h"

/**
 *hash_djb2 - Daniel Berstein hash function algorithm
 *@str: takes in a string
 *Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++) != '\0')
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
