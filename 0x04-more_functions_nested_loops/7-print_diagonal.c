#include "main.h"

/**
 * print_diagonal -function draws a diagonal line on the terminal
 * @n: integer.
 *Return: void.
 */
void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
	} else

		for (line = 0; line < n; line++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == line)
					_putchar('\\');
				else if (space < line)
					_putchar(' ');
			}
			_putchar('\n');
		}
}
