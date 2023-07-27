#include "main.h"

/**
*_strcmp - main
*@s1: data 1
*@s2: data 2
*Return: always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0' && s2[i] != '\0')
	{
	i++;
	}
	return (s1[i] - s2[i]);
}
