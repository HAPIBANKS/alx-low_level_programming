#include "main.h"
#include "2-strlen.c"

/**
*puts2 - entry position
*@str: return
*/
void puts2(char *str)

{
	int j;
	int y;

	y = _strlen(str) - 1;

	for (j = 0 ; j <= y; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		else
			continue;
	}
	_putchar('\n');

}
