#include "main.h"

/**
 * _abs - valor absolute.
 * @r: integer.
 * Return: Always 0.
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	return (0);
}
