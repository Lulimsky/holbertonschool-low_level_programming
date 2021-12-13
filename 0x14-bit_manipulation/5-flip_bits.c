#include "main.h"
#include <limits.h>

/**
 * flip_bits - number of bit to go from one numbert to other
 * @n: long int
 * @m: long int
 * Return: number of bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int flip;

if ((n > ULONG_MAX) || (m > ULONG_MAX))
{
return (0);
}

/* Compute bits differences */
flip = n ^ m;

/* Count one's */
while (flip)
{
count += flip & 1;
flip >>= 1;
}

return (count);
}
