#include <stdlib.h>
#include <stdio.h>
/**
*main - entry position
*Return: end the program
*/
int main(void)
{
	int i;
	int next_i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	next_i = i + 1;
	putchar(next_i + '0');
	}

	return (0);
}
