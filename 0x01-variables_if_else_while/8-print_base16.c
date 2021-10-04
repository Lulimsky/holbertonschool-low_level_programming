#include <stdio.h>

/**
* main - Prints characters of base 16
* Return: 0
**/

int main(void)
{
	int N;
	char C;

	for (N = 48; N <= 57; N++)
	{
		putchar(N);
	}

	for (C = 'a'; C <= 'f'; C++)
	{
		putchar(C);
	}

	putchar('\n');

	return (0);
}
