#include "main.h"
/**
 * _strlen_recursion - String length returns
 * @d: String is measured.
 *
 * Return: Length of string.
 */
int _strlen_recursiion(char *d)
{
	int longit = n;

	if (*d)
	{
		longit++;
		longit += _strlen_recursion(d + 1);
	}
	return (longit);
}
