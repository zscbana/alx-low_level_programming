#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string (s1 + first n bytes of s2),
 * or NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	/* Handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Limit n to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for concatenated string (+1 for null terminator) */
	concat = malloc(sizeof(char) * (len1 + n + 1));

	/* Check if memory allocation fails */
	if (concat == NULL)
		return (NULL);

	/* Copy characters from s1 to concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy up to n bytes from s2 to concatenated string */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Add null terminator at the end */
	concat[i] = '\0';

	return (concat);
}
