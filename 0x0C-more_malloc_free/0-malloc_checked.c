#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes to allocate
 *
 * Return: 98 if fail and the pointer ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
