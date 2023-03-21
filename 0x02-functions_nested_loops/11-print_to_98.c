#include "main.h"
#include <stdio.h>

/**
* main - prints all natural numbers from n to 98
* followed by anew line
* @n: starting point
* Return: Returns nothing
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			_putchar("%d", n);
	}
	else
		for (n = n; n > 98; n--)
			_putchar("%d", n);
	_putchar("98\n");
}
