 #include <stdio.h>

/**
 * main - program that prints all possible different combinations of three digits.
 *numbers must be separated by ,followed by a space.
 *
 * Return: zero
 */
int main(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 100; count1++)
	{
		for (count2 = 0; count2 < 100; count2++)
		{
			if (count1 < j)
			{
				putchar((count1 / 10) + 48);
				putchar((count1 % 10) + 48);
				putchar(' ');
				putchar((count2 / 10) + 48);
				putchar((count2 % 10) + 48);
				if (count1 != 98 || count2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
