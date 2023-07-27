#include "main.h"

/**
*_strncat - main
*@dest: string 1
*@src: string 2
*@n: line
*Return: show result
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; j <= n - 1 && src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
