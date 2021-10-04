#include <stdio.h>

/**
 *main - program that prints all possible different combinations of two digits.
 * 
 *Return: Alaways 0.
 */

int main(void)
{
	int l, r;

	for (l = 0; l < 10; l++)
	{
		for (r = l; r < 10; r++)
		{
			if (r != l)
			{
				printf("%d%d", l, r);
			if (l < 8)
				printf(", ");
			else
				putchar('\n');
			}
		}
	}
	return (0);	
}	
