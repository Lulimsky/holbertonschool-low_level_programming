#include "main.h"
#include <stdio.h>

/**
 *puts2 - function that prints every other character of a string.
 *@str: char.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = 0;
	int c = 0;

	for (len = 0 ; str[len] != '\0'; len++)
	{
		for (; c <= len ; c++)
		{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	}
	_putchar(10);
}
