#include "main.h"

/**
* print_most_numbers - print a count to zero to nine..
*
* Return: to void.
*/
void print_most_numbers(void)
{
	int count;

	for (count = 0 ; count <= 9; count++)
	{
		if (count != 2 && count != 4)
		{
			_putchar (count + '0');
		}
	}
	_putchar ('\n');

}
