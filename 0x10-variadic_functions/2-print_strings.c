#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed bettwen numbers
 * @n:number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        char *str = va_arg(args, char *) ;
        printf("%s", str );

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }
    va_end(args);
}
