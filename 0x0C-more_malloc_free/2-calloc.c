#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	m = malloc(size * nmemb);
	if (m == NULL)
	{
		return (NULL);
	}

	/* Use _memset to initialize the allocated memory to 0 */
	_memset(m, 0, size * nmemb);

	return (m);
}
