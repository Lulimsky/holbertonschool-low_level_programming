#include "main.h"
#include <stdlib.h>
/**
 * _calloc -function allocates memory of an array
 * @nmemb: number of memory
 * @size: size of each memory
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (NULL);
	for (len = 0; len < (nmemb * size); len++)
		ptr[len] = 0;
	return ((void *)ptr);
}
