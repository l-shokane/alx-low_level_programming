#include <stdio.h>
#include <stdlib.h>

/**
 * main- function that prints the min number of coins to
 * get change for an amount
 * @argc: number of command line arg
 * @argv: array that holds the comman line arg
 * Return: 0
 */

int main(int argc, char **argv)
{
	int cents, num_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		num_coins += 1;
	}
	printf("%d\n", num_coins);
	return (0);
}
