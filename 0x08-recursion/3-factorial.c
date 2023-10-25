#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number.
 * @n:number
 *
 * Return: -1 false 1 and n where n >0  true
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
