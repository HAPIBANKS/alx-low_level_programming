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
	for (j = 0; j <= 9; j++)
	{
	if (i < j)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(',' + ' ');
	}
	}
	}

	putchar('\n');

	return (0);
}