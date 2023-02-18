#include <stdio.h>

/**
 * main - shows how the program exited
 * return: ends the execution of a function
 *
 * Return: lowercase alphabet without q and e
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
