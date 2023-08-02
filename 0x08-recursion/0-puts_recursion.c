#include "main.h"

/**
*_puts_recursion - repetition
*@s: entry string
*Return: return void
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] <= '\0')
	{
		_putchar (s[i]);
		i++;
	}
	else
	{
		return;
	}
	_putchar ('\n');
}
