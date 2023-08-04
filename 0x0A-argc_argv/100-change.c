#include <stdio.h>

int change(int cents)
{
	if (cents < 0)
	{
	return (0);
	}

	int coins[5] = [25, 10, 5, 2, 1];
	int num_coins = 0;

	for (int i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
		num_coins++;
		cents -= coins[i];
		}
	}

	return (num_coins);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);
	int num_coins = change(cents);
	printf("%d\n", num_coins);

	return (0);
}
