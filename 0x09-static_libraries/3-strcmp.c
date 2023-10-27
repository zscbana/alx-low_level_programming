#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: i = result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			i = (int)(*s1 - *s2);
			break;
		}
		s1++;
		s2++;
	}

	if (i == 0)
	{
		i = (int)(*s1 - *s2);
	}

	return (i);
}
