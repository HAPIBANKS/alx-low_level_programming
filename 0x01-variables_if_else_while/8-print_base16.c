#include <stdlib.h>
#include <stdio.h>
/**
*main - entry position
*Return: end the program
*/
int main(void)
{
	char ch = '0';
	char next_ch;

	while (ch <= '9')
	{
	putchar(ch);
	next_ch = ch + 1;
	putchar(next_ch);
	ch = next_ch;
	}

	ch = 'a';
	while (ch <= 'f')
	{
	putchar(ch);
	next_ch = ch + 1;
	putchar(next_ch);
	ch = next_ch;
	}

	return (0);
}
