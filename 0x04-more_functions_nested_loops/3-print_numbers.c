#include "main.h"

/**
 * print_numbers - print from 0 to 1
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar('0' + num);
		num++;
	} while (num >= 0 && num <= 9);

	_putchar('\n');
}
