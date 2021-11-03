#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: int
 * @size: int
 * @cmp: int
 *
 * Return: elments of the array and -1 if theres is no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int count;

	if (size <= 0 && cmp != NULL && array != NULL)
	{
		return (-1);
	}
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]))
				return (count);
		}
	return (-1);
}
