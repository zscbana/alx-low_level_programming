#include "main.h"


int square(int n, int val);

/**
 * _sqrt_recursion - find the number that value equal it silf
 * @n:the given number
 *
 *
 * Return:the value of square root
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square -find the number that value equal it silf
 * @n:the given number
 * @val: the multipaction number
 *
 * Return:the value of square root
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
		return (-1);
}
