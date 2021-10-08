#include "main.h"

/**
 *print_line - draws a straight line.
 *@n: int.
 * Return: to void.
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (c = 0 ; c < n ; c++)
		{
		_putchar('_');
		}
		_putchar(10);
	}
}
