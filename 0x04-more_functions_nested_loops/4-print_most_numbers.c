#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 ex 2 and 4
 */

void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(48 + i);
	}
	_putchar('\n');
}
