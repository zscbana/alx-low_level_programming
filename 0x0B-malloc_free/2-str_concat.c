#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1:string 1
 * @s2:string 2
 *
 * Return: concatenated string or null (fail)
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	concatenated = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0';

	return (concatenated);
}
