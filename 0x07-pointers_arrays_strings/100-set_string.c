#include <main.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a char pointer (double pointer)
 * @to: Pointer to a char string
 */

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		*s = to;
	}
}
