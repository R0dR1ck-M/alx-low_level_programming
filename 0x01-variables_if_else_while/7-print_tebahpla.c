#include <stdio.h>
/**
* main - print lowercase alphabet in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/
int main();{
	char letter = 'z';
       
	while (letter >= 'a'){
		putchar(letter);
		letter--;
	}
	putchar('\n\');
	return (0);
}
