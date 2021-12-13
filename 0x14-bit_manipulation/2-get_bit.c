#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: bit
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (n > 0xFFFFFFFFUL)
{
return (0);
}
if ((n & (1 << index)) != 0)
{
return (1);
}
else
{
return (0);
}
}
