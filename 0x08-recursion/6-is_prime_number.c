#include "main.h"

/**
 * is_prime_recursive - checks prime
 * is_prime_number - evaluate a number
 * Description: if is prime number
 * Return: 1 if primer, otherwise 0
 * @n: the number
 * @odd_divisor: divisor
 * @number: random number
 */

int is_prime_recursive(unsigned int number, unsigned int odd_divisor)
{
if (odd_divisor * odd_divisor > number)
{
return (1);
}

if (number % odd_divisor == 0)
{
return (0);
}

return (is_prime_recursive(number, odd_divisor + 2));
}

int is_prime_number(int number)
{
if (number <= 1)
{
return (0);
}

if (number % 2 == 0)
{
if (number == 2)
return (1);
else
return (0);
}

return (is_prime_recursive(number, 3));
}
