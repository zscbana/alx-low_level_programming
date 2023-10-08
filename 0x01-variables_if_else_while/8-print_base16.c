#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all number of base 16
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 48;

	while (ch <= 102)
	{
		putchar(ch);
		if (ch == 57)
			ch += 39;
		ch++;
	}
	putchar('\n');
	return (0);
}
