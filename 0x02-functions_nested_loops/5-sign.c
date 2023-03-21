#include "main.h"

/**
* main - Determines if the input number is greater, equal or less than 0
*
* @n: The input number as an integer
*
* Return: 1 (>0), 0 (==0), -1 (<0)
*/

int print-sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
	_putchar('\n')
}
