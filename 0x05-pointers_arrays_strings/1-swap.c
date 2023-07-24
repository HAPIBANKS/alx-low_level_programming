#include "main.h"

/**
*swap_int - entry
*@b: enter
*@a: enter here
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
