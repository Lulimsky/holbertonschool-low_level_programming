#include <stdio.h>
/**
 * main - program prints all possible combinations from 0 to 9.
 * Return: 0.
 */
int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
		putchar(comb);
		if (comb < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
