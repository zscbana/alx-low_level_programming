#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char *const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	char c;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1])
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
