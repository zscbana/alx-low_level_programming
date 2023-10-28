#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum of all positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv)
{
	int i = 1, positive = 0;

		if (argc < 2)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		int num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num > 0)
		{
			positive += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}
	printf("%d\n", positive);
	return (0);
}
