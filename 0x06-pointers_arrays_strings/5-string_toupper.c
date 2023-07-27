#include "main.h"

/**
*string_toupper - change to upper
*@string: string
*Return: always 0
*/

char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z' && string[i] != '\0')
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
