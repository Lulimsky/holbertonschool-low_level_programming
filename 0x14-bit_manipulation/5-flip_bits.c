#include "main.h"

/**
 * flip_bits - number of bit to go from one numbert to other
 * @n: long int
 * @m: long int
 * Return: number of bites, -1 fault
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;

/* Compute bits differences */
unsigned int flip = n ^ m;

/* Count one's */
while (flip)
{
count += flip & 1;
flip >>= 1;
}

return (count);
}
