#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: integer size
 * @c: a character variable
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
