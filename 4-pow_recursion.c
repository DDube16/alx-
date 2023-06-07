#include "main.h"

/**
 * _pow_recursion - the value of x is raised.
 * @m: raise to value
 * @p: power
 *
 * Returned: the result of power
 */
int _pow_recursion(int m, int p)
{
	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	return (m * _pow_recursion(m, p - 1));
}
