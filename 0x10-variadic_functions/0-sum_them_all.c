#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns
 * the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: the sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < (int)n; i++)
	{
		sum += +va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
