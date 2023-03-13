#include "main.h"

/**
 * _strlen - function returns lenght of a string
 * @s: string
 *
 * Return: longi (length of string)
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
