#include <stdio.h>
/**
*main - args
*
*Return: zero
*/
int main(int i, char **argv)
{
	i = 0;

	**argv = *argv[i];
	{
		printf("%s\n", argv[i]);
	}

  return (0);
}
