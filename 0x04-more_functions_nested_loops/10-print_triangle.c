#include "main.h"

/**
 *print_triangle - prints a triangle
 *followed by a new line.
 *@size: int.
 * Return: to void.
 */
void print_triangle(int size)
{
	int i, f, g;

	for (i = 0; i < size ; i++)
	{
		for (f = 0 ; f < (size - 1) - i ; f++)
		{
		_putchar(' ');
	}
		for (g = 0 ; g <= i ; g++)
		{
		_putchar('#');
		}
	_putchar(10);
}
	if (size <= 0)
{
	_putchar(10);
}
}
