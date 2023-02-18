#include <stdio.h>

/**
 * main - shows how the program exited
 * return: ends the execution of a function
 *
 * Return: print all hex numbers
 */

int main(void)
{
	char s;

	for (s = '0' ; s <= '9' ; s++)
	{
		putchar(s);
	}

	for (s = 'a' ; s <= 'f' ; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
