#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s:array of charcter
 * @c:char that need to be located
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}
	return ('\0');
}
