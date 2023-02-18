#include <stdio.h>

/**
 * main - shows how the program exited
 * return: ends the execution of a function
 *
 * Return: print all single digit base 10 numbers
 */

int main(void)
{
	char num;

	for (num = '0' ; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
