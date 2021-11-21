#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 * Return: void
 */
int main(void)
{
	long int one = 1, two = 2, fibo = 0, suma = 0;

	while (two < 4000000)
	{
		if (two % 2 == 0)
			suma += two;

		fibo = two;
		two += one;
		one = fibo;
	}
	printf("%ld\n", suma);
	return (0);
}
