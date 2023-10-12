#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n:number of diagonals
 */

void print_diagonal(int n)
{
	int j = 0, count;

	for (j = 0; j < n; j++)
	{
		if (n <= 0)
			break;
		_putchar(92);
		_putchar('\n');
		for (count = 0; count <= j; count++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
