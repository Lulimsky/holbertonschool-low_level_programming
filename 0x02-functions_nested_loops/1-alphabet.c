#include "main.h"

/**
* main - print alphabet in lowercase.
*
* Return: to void.
*/
void print_alphabet(void)
{
	int abc;

	for (abc = 97 ; abc >= 122; abc ++)
	{
		_putchar (abc);
	}
	_putchar ('\n');

}
