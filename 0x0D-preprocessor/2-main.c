#include <stdio.h>

/**
 * main - function prints name of file it was compiled from
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
