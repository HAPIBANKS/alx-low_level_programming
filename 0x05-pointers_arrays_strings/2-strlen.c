#include "main.h"

/**
*_strlen - count
*@s: length of string
*Return: return length
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
