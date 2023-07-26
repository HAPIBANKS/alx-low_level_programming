#include "main.h"

/**
*_strcat - main
*@dest: string 1
*@src: string 2
@n: number
*Return: show result
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; n <= j && src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	return (dest);
}
