#include "main.h"

/**
 * _strlen - function returns length of a string
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

/**
 * puts2 - function print every other character of a string
 * starting with the first character followed by a new line
 * @str: input
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
