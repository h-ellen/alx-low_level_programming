#include "main.h"

/**
 * _strlen - Function to use
 * @s: String to check
 * Description: To check the length of a string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * rev_string - function reverses a string
 * @s: string to be reversed
 * return: string in reverse
 */

void rev_string(char *s)
{
	int a = 0;
	int b = (_strlen(s) - 1);
	char temp;

	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
