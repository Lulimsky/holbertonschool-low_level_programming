#include <stdio.h>
/**
*main - function of combinations form zero to nine
*Return: 0
*/
int main(void)
{
int num;

for (num = '0'; num <= '9'; ++num)
{
if (num != '0')
{
putchar(',');
putchar(' ');
}
putchar(num);
}

putchar('\n');
return (0);
}
