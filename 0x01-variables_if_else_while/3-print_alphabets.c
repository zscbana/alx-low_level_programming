#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all uppercase and lowercase from a-z and A-Z
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* print a-z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* print A-Z */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
