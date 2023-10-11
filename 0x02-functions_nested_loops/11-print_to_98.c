#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n : number
*/

void print_to_98(int n)
{
	int nat;

	if (n > 98)
		for (nat = n; nat > 98; nat--)
			printf("%d, ", nat);
	else
		for (nat = n; nat < 98; nat--)
			printf("%d, ", nat);
	printf("98\n");
}
