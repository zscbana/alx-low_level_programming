#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

void print_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}

void print_all(const char *const format, ...)
{
	token_t tokens[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		unsigned int j = 0;
		while (tokens[j].token)
		{
			if (format[i] == *(tokens[j].token))
			{
				tokens[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
