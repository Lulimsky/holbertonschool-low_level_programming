#include "main.h"
#include <stdio.h>

/**
 *print_rev - function that prints a string, in reverse.
 *@s: a char.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	for (c = c - 1 ; c >= '\0' ; c--)
	{
		_putchar (s[c]);
	}
	_putchar('\n');
}
