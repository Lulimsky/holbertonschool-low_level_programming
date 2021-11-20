#include <stdio.h>

/**
 * main - prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 *Return: zero.
 */

int main(void)
{
	int count, uno, dos, tres;

	for (count = 0; count < 1000; count++)
	{
		uno = count / 100; /* hundreds */
		dos = (count / 10) % 10; /* tens */
		tres = count % 10; /* singles */

		if (uno < dos && dos < tres)
		{
			putchar(uno + '0');
			putchar(dos + '0');
			putchar(tres + '0');

			if (count < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
