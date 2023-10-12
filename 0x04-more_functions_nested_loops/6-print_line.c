#include "main.h"

/**
 * print_line - print a strgit line in terminal
 * @n: number of -
 */

void print_line(int n)
{
	int j = 0;

	for (j = 0; j < n; j++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
