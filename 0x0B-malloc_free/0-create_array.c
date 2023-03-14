#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates array of chars
 * @size: size of the array
 * @c: the stored character
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);

}