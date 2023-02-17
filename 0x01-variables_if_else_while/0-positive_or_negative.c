#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - shows how the program exited
 * return: ends the execution of a function
 *
 * Return: returns whether n is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%i is negative \n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero \n", n);
	}
	else
	{
		printf("%i is positive \n", n);
	}
	return (0);
}
