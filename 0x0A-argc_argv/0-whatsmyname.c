#include <stdio.h>

/**
*main - argv, argc
*Return: always 0
*/

int main()
{
	char *program_name = __FILE__;

	printf("%s\n", program_name);
	return (0);
}
