#include "main.h"

/**
 * _is_lowercase - Checks if a character is a lowercase letter.
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _toupper - Converts a lowercase letter to uppercase.
 * @c: The lowercase letter to convert.
 * Return: The corresponding uppercase letter.
 */

char _toupper(char c)
{
	return (c - 32);
}

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (_is_lowercase(str[i]))
		{
			str[i] = _toupper(str[i]);
		}
		i++;
	}

	return (str);
}

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: a pointer to string
 *
 * Return: the result string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (_is_lowercase(str[0]))
	{
		str[0] = _toupper(str[0]);
	}

	while (str[i] != '\0')
	{
		if (
			str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			if (_is_lowercase(str[i + 1]))
			{
				str[i + 1] = _toupper(str[i + 1]);
			}
		}
		i++;
	}

	return (str);
}
