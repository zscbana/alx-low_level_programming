#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a:pointer to array
 * @n:number of elments
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
