#include "search_algos.h"

/**
 * binary_search - binary search algorithm in a sorted array in ascending order
 *
 * @array: pointer to array to search in
 * @size: number of elements in array
 * @value: value to search for, appears only once
 *
 * Return: index when value is located
 *	if not present -1
 *	if array NULL -1
 */


int binary_search(int *array, size_t size, int value)
{
	int first = 0, last = 0, middle = 0, idx = 0;

	if (array == NULL || size == 0)
		return (-1);

	last = size - 1;

	while (first <= last)
	{
		idx = 0;
		printf("Searching in array: ");
		for (idx = first; idx <= last; idx++)
			if (idx == last)
			{
				printf("%d\n", array[last]);
				break;
			}
			else
				printf("%d, ", array[idx]);

		middle = (first + last) / 2;
		if (array[middle] < value)
			first = middle + 1;
		else if (array[middle] > value)
			last = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
