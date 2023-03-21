#include "main.h"

/**
* main - prints the alphabet 10 times
* Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch)
			ch++;
		}
		alphabet_count++;
		_putchar('\n')
	}
	return(0);
}
