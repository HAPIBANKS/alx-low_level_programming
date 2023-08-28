#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name
 * @name: name of a person
 * @f: function pointer
 * Return: always nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
