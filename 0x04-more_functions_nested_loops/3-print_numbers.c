#include "main.h"

/**
* print_numbers - print a count to zero to nine..
*
* Return: to void.
*/
void print_numbers(void)
{
	int count;

	for (count = 0 ; count <= 9; count++)
	{
		_putchar (count + '0');
	}
	_putchar ('\n');

}
