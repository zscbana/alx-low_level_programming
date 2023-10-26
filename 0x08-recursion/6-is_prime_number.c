#include "main.h"

int check_prime(int n, int oth);
int is_prime_number(int n);

/**
 * is_prime_number -function checks for prime number
 * @n: given number
 *
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime -function checks for prime number
 * @n: given number
 * @oth: other number
 * Return: 1 if prime number else 0
 */

int check_prime(int n, int oth)
{

	if (oth >= n && n > 1)
	{
		return (1);
	}
	if (n % oth == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check_prime(n, oth + 1));
}
