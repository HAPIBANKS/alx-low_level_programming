#include <stdio.h>

/**
*main - argc, argv
*@argv: argument variable
*@argc: argument number
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int i = argc;

	*argv = argv[i];

	printf("%d\n", argc);

	return (0);
}
