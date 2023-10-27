#include "main.h"

/**
 * _strncat -function that concatenates two strings.
 * @dest: pointer to distantion input
 * @src: pointer to sorce output
 * @n: most number of byets from @src
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
	{
		c++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';

	return (dest);
}
