#include "main.h"
#include <limits.h> 
/**
 * set_bit - function that sets the value of a bit at a given index
 * @n: pointer to number to be chaged
 * @index: bit
 * Return: -1 if an error occured, 1 if success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (*n > ULONG_MAX)
{
return (-1);
}

*n |= 1 << index;
return (1);
}
