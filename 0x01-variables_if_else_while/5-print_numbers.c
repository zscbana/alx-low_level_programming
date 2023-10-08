#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints from 0-9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');
	return (0);
}
