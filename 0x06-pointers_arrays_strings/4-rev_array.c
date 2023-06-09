#include "main.h"

/**
*rev_array - reverses the contents of an array of integers
*@a: array
*@n: number of elements
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
