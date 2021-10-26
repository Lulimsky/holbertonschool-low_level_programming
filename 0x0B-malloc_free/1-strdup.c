#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to newly allocated space in memory.
 */
char *_strdup(char *str)
{
	unsigned int index, indice;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		;
	index++;
	ptr = malloc(index * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (indice = 0; indice < index; indice++)
	{
		ptr[indice] = str[indice];
	}
	return (ptr);
}
