#include <stdio.h>

/**
 * main - prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: zero.
 */
int main(void)
{
	int uno, dos, tres;

	for (uno = 0; uno < 8; uno++)
	{
		for (dos = uno + 1; dos < 9; dos++)
		{
			for (tres = dos + 1; tres < 10; dos++)
			{
				putchar((uno % 10) + '0');
				putchar((dos % 10) + '0');
				putchar((tres % 10) + '0');

				if (uno == 7 && dos == 8 && tres == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
