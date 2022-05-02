#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to look into
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value found, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, stop, jump;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);
	prev = 0, stop = jump;

	while (prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (stop < size)
		{
			if (array[prev] <= value && value <= array[stop])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", prev, stop);
				break;
			}
		} else
		{
			if (array[prev] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", prev, stop);
				break;
			}
		}
		prev = stop;
		stop = prev + jump;
	}

	while (prev <= stop)
	{
		if (prev == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
