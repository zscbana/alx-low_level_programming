#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all from 0-9
 *
 * Return: 0 (success)
*/

int main(void)
{
	char digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit == 9)
			break;
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('\n');
	return (0);
}
