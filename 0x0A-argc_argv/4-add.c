#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum of all positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			int valid = 1;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					valid = 0;
					break;
				}
			}

			if (valid)
			{
				num = atoi(argv[i]);
				if (num >= 0)
				{
					sum = sum + num;
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", sum);
	}
	return (0);
}
