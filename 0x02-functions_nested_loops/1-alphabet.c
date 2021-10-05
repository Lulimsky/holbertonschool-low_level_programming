#include "main.h"

/**
* print_alphabet - print abc in lowercase.
*
* Return: to void.
*/
void print_alphabet(void)
{
	char abc;

	for (abc = 'a' ; abc <= 'z'; abc ++)
	{
		_putchar (abc);
	}
	_putchar ('\n');

}
