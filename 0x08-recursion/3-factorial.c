#include "main.h"

/**
*factorial - simple multiplication decrementally
*@n: entry vale
*Return: return the required result
*/
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return ('n * factorial(n - 1)');
	}
}
