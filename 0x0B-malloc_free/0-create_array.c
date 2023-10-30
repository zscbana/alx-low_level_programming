#include "main.h"
#include <stdlib.h>

/**
 * create_array - crate an array of char
 * and initializes it with a specific char
 * @size:size of array
 * @c:specific char
 *
 * Return: array of char or 0 if null
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);

	if (size == 0 || a == 0)
		return (0);
	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
