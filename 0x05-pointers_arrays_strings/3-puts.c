#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	puchar(10);
}
