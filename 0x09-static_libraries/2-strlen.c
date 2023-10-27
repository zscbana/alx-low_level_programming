#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: char
 *
 * Return: the length of a string ()
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
