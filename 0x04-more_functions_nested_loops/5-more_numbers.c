#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, n, num;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				num = i % 10;
			}
			_putchar('0' + num);
		}
		_putchar('\n');
	}
}
