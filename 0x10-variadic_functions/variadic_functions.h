#ifndef VARIADIC_FUNCATION_H
#define VARIADIC_FUNCATION_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct token - struct token
 * @token: format token
 * @f: the funcation associate
 */

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
