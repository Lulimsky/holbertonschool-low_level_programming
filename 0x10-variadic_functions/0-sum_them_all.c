#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: unsigned int.
 * Return: zero if n different than 0
 * and sum argc.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int a;
	int sum = 0;

	if (n == 0)

		return (0);

	va_start(num, n);

	for (a = 0; a < n; a++)
		sum += va_arg(num, unsigned int);

	va_end(num);
	return (sum);
}
