#include <unistd.h>
#include "main.h"

/**
 * _putchar - funcation that print array of char
 * @c: char
 *
 * Return: char or array of char
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
