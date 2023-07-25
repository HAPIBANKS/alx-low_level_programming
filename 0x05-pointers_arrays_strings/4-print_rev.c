#include "main.h"
#include "2-strlen.c"

/**
*print_rev - entry position
*@s: return
*/
void print_rev(char *s)
{
	int j;
	j = _strlen(s) - 1;


	while (s[j] >= 0)
	{
	_putchar(s[j]);
	j--;
	}
	_putchar('\n');
}
