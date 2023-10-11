#include "main.h"

/**
 * jack_bauer - print all the 24:60
 *
 *
*/

void jack_bauer(void)
{
	int min, hor;

	for (hor = 0; hor <= 23; hor++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hor / 10) + 48);
			_putchar((hor % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
