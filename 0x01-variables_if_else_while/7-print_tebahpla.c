#include <holberton.h>

/**
* main - print lowercase alphabet in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'z';
       
	while (letter >= 'a')
	{
		_putchar(letter);
		letter--;
	}

	_putchar('\n\');
	return (0);
}
