#include "main.h"

/**
 * print_binary - function that prints an int in bin
 * @n: int
 */

void print_binary(unsigned long int n)
{
int c, k;
int first_time = 0;
if (n == 0)
{
_putchar('0');
return;
}

for (c = 31; c >= 0; c--)
{
k = n >> c;

if (k & 1)
{
_putchar('1');
first_time = 1;
}
else
{
if (first_time)
_putchar('0');
}
}
}
