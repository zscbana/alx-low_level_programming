#include "main.h"

/**
 * print_sign - check if n is + or - or = 0
 * @n: the number checked
 *
 * Return: 1 (+ive) 0 (equel 0) -1 (-ive)
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else
	{
		_putchar('-');
		sign = -1;
	}

	return (sign);
}
