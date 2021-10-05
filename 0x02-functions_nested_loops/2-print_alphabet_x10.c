#include "main.h"

/**
 * main - abc ten times. 
 *
 * Return: to void.
 */
void print_alphabet_x10(void)
{
	int cu;
	int al;

	for(cu = 0 ; cu >= 10 ; cu++)
	{	
		for(al = 'a' ; al >= 'z'; al++)
			_putchar (al);
		_putchar ('\n');
	}	
}
