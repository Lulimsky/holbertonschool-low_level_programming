#include"main.h"

/**
 *_isalpha - checks for alphabetic character.
 *
 *@c: character in ascii.
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
