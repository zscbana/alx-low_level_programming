#include "main.h"
/**
 * main - entry point
 *
 * Description: print from a to z
 *
 * Return: 0 success
*/

print_alphabet(void)
{
	int c = 'a';

	for (c; c  <=  'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
