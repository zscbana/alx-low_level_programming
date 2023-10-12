#include "main.h"
#include <ctype.h>

/**
 * _isdigit - funcation used to detrmen digts
 * @c: digt
 *
 * Return: if 1 (success) else 0 (fail)
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
