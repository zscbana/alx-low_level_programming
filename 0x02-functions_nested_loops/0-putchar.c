#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the c to stdout
 *
 * Description: print _putchar and return 0
 * @c: the char to print
 *
 * Return: o (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
