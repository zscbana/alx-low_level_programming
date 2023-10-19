#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: pointer to array
 *
 * Return: modifed array
 */

char *leet(char *s)
{
	char *ss = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {'4', '3', '0', '7', '1'};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*s == key[i] || *s == key[i] + 32)
			{
				*s = 48 + val[i];
			}
		}
		s++;
	}
	return (ss);
}
