#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers,
 * followed by a new line.
 * @n: unsigned int.
 * @separator: char pointeri
 * Return: zero if n different than 0
 * and sum argc.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list shown;
	unsigned int a;

	va_start(shown, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", (va_arg(shown, unsigned int)));

		if (separator != 0 && a < (n - 1))
			printf("%s", separator);

	}
	va_end(shown);
	printf("\n");
}
