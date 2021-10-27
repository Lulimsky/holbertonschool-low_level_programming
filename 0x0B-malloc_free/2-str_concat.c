#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_len - size string
  * @s: string
  * Return: largo del string.
  */
int str_len(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s && s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - function that concatenates two strings.
 *@s1: string
 *@s2: string
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *S3;
	int index = 0;
	int xedni = 0;
	int largo = str_len(s1) + str_len(s2) + 1;

	S3 = malloc(sizeof(char) * largo);
	if (S3 == NULL)
	{
		return (NULL);
	}
	for (xedni = 0; s1 && s1[xedni] != '\0'; xedni++)
	{
		S3[index] = s1[index];
		index++;
	}
	for (xedni = 0; s2 && s2[xedni] != '\0'; xedni++)
	{
		S3[index] = s2[xedni];
		index++;
	}
	S3[index] = '\0';
	return (S3);

}
