#include "function_pointers.h"

/**
 * main - check the code of school student
 * @argc:number of args
 * @argv: arg vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}
	if (b < 0)
	{
		printf("Error\n"), exit(2);
	}
	while (b--)
	{
		printf("%02hhx%s", *p++, b ? " " : "\n");
	}

	return (0);
}
