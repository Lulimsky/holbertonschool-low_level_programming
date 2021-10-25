#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 *
 *@s: the lenght of a string
*
 * Return: Always 0.
 */
int _strlen(char *s)
{	int l;

	for (l = 0 ; s[l] != '\0' ; l++)
		;
	return (l);
}
