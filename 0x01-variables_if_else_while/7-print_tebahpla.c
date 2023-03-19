#include <stdio.h>
/**
* main - print lowercase alphabet in reverse,
* followed by a new line
* Description: using the main function
* this program prints 'z, y, x...c, b, a'
* Return: Always 0 (Success)
*/
int main(void);
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n\);
	return (0);
}
