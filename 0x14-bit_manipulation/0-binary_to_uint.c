#include "main.h"

/*
 * binary_to_uint - converts binary to decimal
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x = atoi(b);
	int base = 1;
	int dec = 0;
	int rem;
	int i;

		for (i = 0; x > 0; i++)
		{
			rem = x % 10;
			x = x / 10;
			dec = dec + (rem) * (pow(2, i));
			return (dec);
		}
}
