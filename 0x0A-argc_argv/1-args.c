#include <stdio.h>

/**
 * main - print number of argument passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return 0;
}
