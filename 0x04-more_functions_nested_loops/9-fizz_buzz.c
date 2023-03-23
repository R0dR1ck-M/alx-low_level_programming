#include <stdio.h>

/**
*fizz_buzz - prints numbers between 1 and 100
*but Fizz in place of multiples of 3
*and Buzz in place of multiples of 5
*and FizzBuzz in place of multiples of both
*3 and 5
*/

int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf('FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf('Fizz ");
		else
			printf("%d", h);
	h++;
	}
return (0)
}
