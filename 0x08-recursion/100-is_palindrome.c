#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - recursive function
 * is_palindrome - looks for char s to s end
 * @s: string to be search
 * @e : int
 * @str: pointer to char
 * @s: int
 * Return: 1 if palindrom 0 if not
 */

int is_palindrome_recursive(char *str, int s, int e)
{
if (s == e)
return (1);

if (str[s] != str[e])
return (0);

if (s < e + 1)
return (is_palindrome_recursive(str, s + 1, e - 1));

return (1);
}

int is_palindrome(char *s)
{
int n;

if (s == NULL)
return (1);

n = strlen(s);
if (n == 0)
return (1);

return (is_palindrome_recursive(s, 0, n - 1));

}
