#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string given as a parameter
 *
 * Return: a copy of the string given as a parameter, or NULL on failure
 */

char *_strdup(char *str)
{
	int size = 0, i;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = str[i];
	}
	a[size] = '\0';

	return (a);
}
