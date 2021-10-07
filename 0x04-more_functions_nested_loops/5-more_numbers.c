#include "main.h"
/**
 * more_numbers - print a counter fourteen times.
 *@int c.
 *@int n.
 * Return: to void.
 */
void more_numbers(void)
{
	int c;
	int n;

	for (c = 0 ; c <= 10 ; c++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if (c >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar(10);
	}

}
