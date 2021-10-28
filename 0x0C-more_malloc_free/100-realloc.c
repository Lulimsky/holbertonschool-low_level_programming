#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - function that reallocates a memory block using malloc and free
 *@buffer: the address of memory to print
 *@size: the size of the memory to print
 *
 * Return: NULL and a new array.
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *nuevo_array;

	if (new_size == old_size)
		return (ptr);

	nuevo_array = malloc(new_size);
	if(!ptr)
	{	
		free(ptr);
		return (nuevo_array);
	
	}

	if (new_size == 0)
	{
		free(ptr);
		return(NULL);
	}

	if (new_size > old_size)
		return(nuevo_array);

	nuevo_array = memcpy (nuevo_array, ptr, old_size);
	free(ptr);
	return (nuevo_array);
	
}
