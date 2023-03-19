#include <stdio.h>
/**
* main - print all single digit numbers of base 10 starting from 0, followed by a new line
* Description: using the main function
* this program prints '0 1 2 3 4 5 6 7 8 9'
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
