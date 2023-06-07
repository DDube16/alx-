#include "main.h"
/**
 * print_rev_recursion - Prints in reverse.
 * @d: String is printed
 */
void _print_rev_recursion(char *d)
{
	if (*d)
	{
	
		_print_rev_recursion(d + 1);
		putchar(*d);
	
	}
}
