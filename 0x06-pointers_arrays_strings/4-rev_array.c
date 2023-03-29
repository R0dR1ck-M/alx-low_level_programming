#include "main.h"

/**
 * rev_array - reverses the contents of an array of integers
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n -1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
