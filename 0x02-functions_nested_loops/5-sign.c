#include"main.h"

/**
 * print_sign - prints the sign of a number
 * @n: to check value
 * Return: 1 if n is greater than zero print +
 * return 0 if n is zero print 0
 * return -1 if n is less than zero print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);

	} else if (n == 0)
	{

		_putchar (48);
		return (0);

	} else if (n < 0)
	{
		_putchar ('-');
	}
		return (-1);
}
