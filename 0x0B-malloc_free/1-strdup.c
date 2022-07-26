#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @*str: a char pointer
 * Return: if successful, a pointer to the duplicated string else NULL.
 */
char *_strdup(char *str)
{
	char *strcopy;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
		;

	strcopy = (char *)malloc(sizeof(char) * (a + 1));

	if (strcopy == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strcopy[b] = str[b];
	}
	return (strcopy);
}
