#include "main.h"
#include "2-strlen.c"

/**
*rev_string - entry position
*@s: return
*Return: always 0
*/
void rev_string(char *s)

{
	int i;
	int j;

	i = 0;
	j = _strlen(s) - 1;

	while (i < j)
	{
	char temp = s[i];

	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
	}
}
