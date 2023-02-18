#include <stdio.h>

/**
 * main - shows how the program exited
 * return: ends the execution of a function
 *
 * Return:prints lowercase alphabet
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
