#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int num, i, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
