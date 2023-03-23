#include "main.h

/**
*_isupper - checks the case of a character
*@c: character to check
*Return: 1 whenever it is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
