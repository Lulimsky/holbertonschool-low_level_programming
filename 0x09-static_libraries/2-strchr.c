#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character.
 * Return: a pointer or NULL.
 */
char *_strchr(char *s, char c)
{
	int pos;

	for (pos = 0; s[pos] >= '\0'; pos++)
	{
		if (s[pos] == c)
			return (s + pos);
	}

	return ('\0');
}
