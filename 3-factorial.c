#include "main.h"

/**
 * factorial returns the number
 * @n: number is returned from factorial
 *
 * Return: n is factorial
 */ 
int factorial(int n)
{
	if (n < 0)
		return (-1)
	if (n == 0)
		return (1)
	return (n * factorial(n _ 1));
}
