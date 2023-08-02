#include "main.h"

/**
*_print_rev_recursion - repetition
*@s: entry string
*Return: return void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
