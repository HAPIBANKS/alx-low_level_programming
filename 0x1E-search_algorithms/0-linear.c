#include "search_algos.h"

/**
*linear_search - a function that linearly search for a given value
*from a set of data
*@array: pointer to the first element of the array to search
*@size: number of elements in the array
*@value : the value to search
*Return: the first index where the value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (value)
	{
		for (i = 0; i < size; i++)
		{
			printf("value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
