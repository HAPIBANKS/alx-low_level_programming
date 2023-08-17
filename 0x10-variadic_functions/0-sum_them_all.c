#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sum up all the parameters
*@n: number of argument
*Return: return the requested output
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;


	va_start(ap, n);
	if (n == 0)
	return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
