#include <stdlib.h>
#include <stdio.h>
/**
*main - entry position
*Return: end the program
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z';)
	{
	putchar(ch);
	ch++;
	}
	upper_ch = ch - 'a' + 'A';
	while (upper_ch <= 'Z')
	{
	putchar(upper_ch);
	upper_ch++;
	}
	putchar('\n');

	return (0);
}
