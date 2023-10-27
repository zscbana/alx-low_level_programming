#include "main.h"

/**
 * _memcpy - unction that copies memory area.
 * @dest: pointer to array
 * @n: size
 * @src: pointer array of char
 *
 * Return: array of char aftre coppy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; n > 0; t++, n--)
	{
		dest[t] = src[t];
	}
	return (dest);
}
