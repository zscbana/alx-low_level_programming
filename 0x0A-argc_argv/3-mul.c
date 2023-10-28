#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multipaction of two numbers
 * @argc:int
 * @argv:list
 * Return: 0 success 1 fail
 */

int main(int argc, char const *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
