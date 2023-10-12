#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of diagonals
 */
void print_diagonal(int n)
{
	int j, count;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		for (count = 0; count < j; count++)
		{
			_putchar('0');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
