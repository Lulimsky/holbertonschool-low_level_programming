#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - perform a binary search on an array and find lowest index
 * @array: pointer to first element in the array
 * @size_t: number of elements in the array
 * @left: array
 * @rigth: array
 * @value: value to search
 * Return: index of value in array or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}
