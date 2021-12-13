#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary to an int
 * @b: pointer to string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
{
return (0);
}
while (*b)
{
if ((*b != '0') && (*b != '1'))
{
return (0);
}

result *= 2;

if (*b++ == '1')
{
result += 1;
}
}

return (result);
}
