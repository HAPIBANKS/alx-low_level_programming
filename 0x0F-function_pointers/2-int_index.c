#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - integers number
 * @array: integer array
 * @size: size of array
 * @cmp: function pointer
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result == 1)
			return (i);
	}
	return (-1);
}
