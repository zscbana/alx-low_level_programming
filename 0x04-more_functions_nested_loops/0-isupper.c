#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if c is upercase
 * @c:char enterd
 *
 * Return: 1 true and 0 false
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
