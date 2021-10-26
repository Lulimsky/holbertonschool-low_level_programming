#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array -creates an array of chars, starting with an specific char.
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: pointer to the array, or NULL if it fails.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}

	return (ptr);
}
