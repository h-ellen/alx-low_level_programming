#include "main.h"
#include <stdio.h>

/**
 *_create_array(unsigned int size, char c) - function creates an array of characters
 *and initializes it with a specific char
 *@size: size of the array
 *@str: array name
 *@c: stored char
 *returns: pointer to an array
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
