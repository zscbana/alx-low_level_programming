#include "main.h"

/**
 * print_square - draws a square  on the terminal.
 * @size: size of square
 */

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
