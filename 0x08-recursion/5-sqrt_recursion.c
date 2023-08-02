#include "main.h"

/**
*_sqrt_recursion - entities
*@n: given parametr
*Return: show outcome
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
