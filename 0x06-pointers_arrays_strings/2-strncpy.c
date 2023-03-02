#include "main.h"

/**
 * _strncpy - check the code for Holberton School students.
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: parameter for number of bytes
 * Return: Always 0.
 */

char *_strncpy( char *dest, char *src, int n)
{
	if (dest == NULL && src == NULL)
	{
		return NULL;
	}

	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	
	return start;
}
