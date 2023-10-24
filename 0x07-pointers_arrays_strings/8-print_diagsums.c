#include "main.h"

/**
 * print_diagsums - a function that prints the sum ofthe two diagonals
 * of a square matrix of integers.
 * @a: pointer to array of sum
 * @size: size of dingonal
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 +=  a[i];
		sum2 += a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
