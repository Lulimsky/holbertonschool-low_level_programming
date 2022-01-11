#include "main.h"

/**
*_islower - checks for lowercase character.
*
*@c: lowercase character in ascii value.
*
*Return: 1 if character 'c' is lowercase otherwise return 0.
*
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
