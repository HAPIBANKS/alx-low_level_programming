#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry position
 * Return: end of program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
	printf("greater than 5\n");
	}
	if (last_digit == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("less than 6 and not 0\n");

	return (0);
}
