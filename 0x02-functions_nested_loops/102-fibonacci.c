#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: void.
 */
int main(void)
{
	int count;
	long int one, two, fibo;

	one = 1;
	two = 2;

	for (count = 0; count < 48; count++)
	{
		fibo = one + two;
		printf(", %ld", fibo);
		one = two;
		two = fibo;
	}
	printf("%ld, %ld", one, two);

	printf("\n");

	return (0);
}
