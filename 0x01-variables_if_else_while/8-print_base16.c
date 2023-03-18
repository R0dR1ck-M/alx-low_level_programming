#include <stdio.h>
/**
* main -print if the number is positive, zero or negative
*
* Description: using the main function
* this program prints 'Programming is positive, zero or negative
* Return: 0
*/
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
