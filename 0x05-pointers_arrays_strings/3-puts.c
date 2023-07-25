#include "main.h"

/**
*_puts - entry position
*@str: return
*/
void _puts(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
	_putchar(str[j]);
	j++;
	}
	_putchar('\n');
}
