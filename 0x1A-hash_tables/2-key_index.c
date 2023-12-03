#include "hash_tables.h"

/**
 *key_index - a functionn that gives the index of a key
 *@key: key to be taken
 *@size: size of the array
 *Return:an index(address of the key in the array)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
