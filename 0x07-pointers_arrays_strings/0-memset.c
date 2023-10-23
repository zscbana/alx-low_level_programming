#include "main.h"

/**
 * _memset -function that fills memory with a constant byte.
 * @s: pointer to array
 * @b: asci cahr
 * @n: size
 *
 * Return: char value of arr
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;
	for (t = 0; n > 0; n--, t++)
	{
		s[t] = b;
	}

	return (s);
}
