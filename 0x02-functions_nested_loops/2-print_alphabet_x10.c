#include "main.h"
/**
 * print_alphabet_x10 - print from a to z 10 times
 *
*/
void print_alphabet_x10(void)
{
	int c, i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{

			_putchar(c);
		}
		i++;

		_putchar('\n');
	}
}
