#include "main.h"
#include <stdio.h>

/**
 *rev_string -  function that reverses a string.
 *@s: poniter to a char.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0, pos;
	char aux;

	while (s[len])
		len++;
	len--;

	for (pos = 0; pos < len - pos; pos++)
	{
		aux = s[pos];
		s[pos] = s[len - pos];
		s[len - pos] = aux;
	}
}
