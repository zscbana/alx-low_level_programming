#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer to distantion input
 * @src: pointer to sorce output
 * @n: most number of byets from @src
 *
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
