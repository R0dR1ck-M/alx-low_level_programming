#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - prints numbers between 0 and
*9 except 2 and 4
*Return: returns nothing
*/

void print_most_numbers
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
