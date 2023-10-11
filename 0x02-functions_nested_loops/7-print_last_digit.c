#include "main.h"
/**
 * print_last_digit - calculates and returns the last digit of a number
 * @num: integer input
 *
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	return (last_digit);
}
