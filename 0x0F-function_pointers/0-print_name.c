#include "function_pointers.h"

/**
 * print_name - print the passed name
 * @name:string name
 * @f: the print funcation pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
