#include "main.h"

/**
  * _memcpy - Function that copies memory area
  * @dest: dest of the memory.
  * @src: source of th memory
  * @n: bytes of the memory.
  *
  * Return: pointer to destination.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; pos < n; pos++)
	{
		dest[pos] = src[pos];
	}

	return (dest);
}

