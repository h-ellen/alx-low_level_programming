#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}

	_putchar('\n');
}
