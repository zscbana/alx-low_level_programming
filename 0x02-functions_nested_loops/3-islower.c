#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the char is in lower or upper case
 * @c: the char enterd to be checked
 *
 * Return: if lowwer 1 else 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
