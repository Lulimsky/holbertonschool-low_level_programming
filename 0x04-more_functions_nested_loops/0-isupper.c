#include "main.h"

/**
*_isupper - checks for uppercase character.
*
*@c: uppercase character in ascii value.
*
*Return: 1 if character 'c' is uppercase otherwise return 0.
*
*/

int _isupper(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
