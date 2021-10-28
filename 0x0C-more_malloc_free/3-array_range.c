#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: integer
 * @max: integer
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int byte, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == 0)
		return (NULL);
	for (byte = 0; byte < max - min + 1; byte++)
		ptr[byte] = min + byte;
	return (ptr);
}
