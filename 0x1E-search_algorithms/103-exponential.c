#include <stdio.h>
#include "search_algos.h"

/**
 * bs - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size_t: size of the array
 * @right: array
 * @left: array
 * @value: value to search in
 * Return: 1 or -1
 */

int bs(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

	if (array[i] == value)

		return (i);

	if (array[i] > value)

		right = i - 1;

		else
		left = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an array with
 * the exponential search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (bs(array, i / 2, right, value));
}
