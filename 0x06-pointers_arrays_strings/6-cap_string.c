#include "main.h"
#include <string.h>

/**
*cap_string - capitalize
*@string: characters
*Return: always 0
*/
char *cap_string(char *string)
{
	int i, j;
	char *new_string;

	new_string = strlen + 1;

	for (i = 0, j = 0; string[i] != '\0'; i++)
	{
		if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n' || string[i] == ',' ||
		string[i] == ';' || string[i] == '.' || string[i] == '!' || string[i] == '?' ||
		string[i] == '"' || string[i] == '(' || string[i] == ')' || string[i] == '{' ||
		string[i] == '}')
		{
			new_string[j++] = string[i];
		}
		else
		{
			new_string[j++] = string[i] - 32;
		}
	}

	new_string[j] = '\0';

	return (new_string);
}
