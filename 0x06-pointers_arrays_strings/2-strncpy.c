#include "main.h"

/**
*_strncpy - copies a string, including the terminating null byte, using
*at most an inputted number of bytes. If the length of the source string is less than the maximum
*byte number, the remainder of the destination string is filled with null bytes.
*@dest: buffer storing the string copy
*@src: the source string
*@n: max number of byte copied
*Return: returns new string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
