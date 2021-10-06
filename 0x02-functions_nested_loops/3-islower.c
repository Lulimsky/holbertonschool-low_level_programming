#include "main.h"

/**
* islower - checks for lowercase character.
*
* Return: 1 if character 'c' is lowercase otherwise return 0.
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
