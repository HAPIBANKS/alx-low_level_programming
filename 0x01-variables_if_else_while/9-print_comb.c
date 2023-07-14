#include <stdlib.h>
#include <stdio.h>
/**
*main - entry position
*Return: end the program
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	putchar(i);
	if (i == '9')
	continue;
	else
	{
	putchar(',');
	}
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
