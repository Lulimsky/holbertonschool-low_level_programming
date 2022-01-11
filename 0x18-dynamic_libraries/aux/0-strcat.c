#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *@src: appends
 *@dest: add a termination null byte
 * Return: string concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, pos;

	for (pos = 0; dest[pos] != '\0'; pos++)
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[pos + i] = src[i];
		}
	}
}
