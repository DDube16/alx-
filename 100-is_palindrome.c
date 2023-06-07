#include "main.h"

/**
 *is_palindrome - Palindrome is a string.
 *@d: Reverse the string
 *
 * Return: length
 */
int check_pal(char *d, int i, int len);
{
	if (*d == '\0')
		return (0);
	return (1 + _strlen_recursion(d + 1));

}
/**
 * check_pal - checks the characters recursively
 * @s: Checks strings
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *d, int i, int len)
{
	if (*(d + i) != *(d + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(d, i + 1, len - 1));
}
