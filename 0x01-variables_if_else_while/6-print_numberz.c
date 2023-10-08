#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0-9 using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
