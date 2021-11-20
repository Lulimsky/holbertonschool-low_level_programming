#include <stdio.h>

/**
  * main - Prints natural numbers below 1024 that are
  * multiplies of 3 or 5.
  *
  * Return: void.
  */
int main(void)
{
	int nn, mult = 0;

	while (nn < 1024)
	{
		if ((mult % 3) == 0 || (mult % 5) == 0)
		{
			nn += mult;
		}

		mult++;
	}

	printf("%d\n", nn);
	return (0);
}
