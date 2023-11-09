#include "variadic_functions.h"

/**
 * fochar - format char
 * @separator: the string separator
 * @ap: arg pointer
 */

void fochar(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * focint - format int
 * @separator: the int separator
 * @ap: arg pointer
 */

void foint(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * fofloat - format float
 * @separator: the float separator
 * @ap: arg pointer
 */

void fofloat(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * fostring - format string
 * @separator: the string separator
 * @ap: arg pointer
 */

void fostring(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	if (!str)
	{
		str = "(nil)";
	}
	printf("%s%s", separator, str);
}

/**
 * printall - print anything
 * @format: the format string
 */

void printall(const char *const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t token[] = {
		{"c", fochar},
		{"i", foint},
		{"f", fofloat},
		{"s", fostring},
		{NULL, NULL},
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (token[j].token)
		{
			if (format[i] == token[j].token[0])
			{
				token[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
