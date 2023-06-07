#include "main.h"
/**
 * puts_recursion - puts is a function;
 * @d: input
 * Return: Success 0
 */
void _puts_recursion(char *d)
{
	if (*d)
	{
		_putchar(*d);
		_puts_recusion(d + 1); 
	}
	else
		_putchar('\n');
}
