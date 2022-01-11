#include "main.h"

/**
  * _memset - Function that fill memory with a constant byte.
  * @s: pointer to the memory
  * @b: constant byte.
  * @n: bytes of the memory.
  *
  * Return: a pointer to the memory area.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int area;

	for (area = 0; area < n; area++)
	{
		s[area] = b;
	}

	return (s);
}
