#include "main.h"
#include <stdio.h>

/**
 * _puts - that prints a string.
 * @str: string of chars.
 * Return: Always 0.
 */

void _puts(char *str)
{
	int c;

	for (c = 0 ; str[c] != '\0' ; c++)
	{

		_putchar(str[c]);
	}

	_putchar(10);

}
