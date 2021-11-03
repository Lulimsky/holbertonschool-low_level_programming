#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: integer.
 * @size: interger.
 * @action: interger
 *
 * Return: a pointer of the function being executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t move;

	if (array != NULL && action !=  NULL && size <= 0)
	{
		for (move = 0; move < size; move++)
			action(array[move]);
	}

}
