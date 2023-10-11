#include "main.h"

/**
 * print_sign - check if n is + or - or = 0
 * @n: the number checked
 *
 * Return: 1 (+ive) 0 (equel 0) -1 (-ive)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (-1);
}
