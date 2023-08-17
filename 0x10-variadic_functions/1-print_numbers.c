#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers - print number
*@n: number of parameters
*@separator: character separators
*Return: return nothing (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int j;

	va_start(ap, n);

		if (n == 0)
	{
		printf("\n");
		return;
	}


	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", j);
			else
				printf("%d", j);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", j);
			else
				printf("%d%s", j, separator);
		}
	}
	va_end(ap);
}
