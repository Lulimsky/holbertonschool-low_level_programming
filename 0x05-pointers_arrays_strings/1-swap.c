#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: pointer.
 * @b: pointer.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{	int swap;

	swap = *a;
	*a   = *b;
	*b = swap;
}
