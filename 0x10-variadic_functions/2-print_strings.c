#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function tha prints string
 *followed by a new line.
 * @separator: pointer to string.
 * @n:integer.
 * Return: a string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ss;
	unsigned int lenght;
	char *other;

	va_start(ss, n);
	for (lenght = 0; lenght < n; lenght++)
	{
		other = va_arg(ss, char *);
		if (other == 0)
			printf("(nil)");
		else
			printf("%s", other);
		if (separator && lenght < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ss);
}
