#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: null if fails or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, lenI, lenII, lenIII;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
		;
	for (lenI = 0; s2[lenI] != '\0'; lenI++)
		;
	if (n >= lenI)
		n = lenI;
	ptr = malloc(sizeof(char) * (lenI + n) + 1);
	if (ptr == 0)
		return (0);
	for (lenII = 0; lenII < len; lenII++)
	{
		ptr[lenII] = s1[lenII];
	}
	for (lenIII = lenII; lenIII < lenII + n; lenIII++)
	{
		ptr[lenIII] = s2[lenIII - lenII];
	}
	ptr[lenIII] = '\0';
	return (ptr);
	return (NULL);
}
