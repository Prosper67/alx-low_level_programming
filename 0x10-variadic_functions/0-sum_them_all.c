#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: Integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	/* validate valist and initialize */
	if (n == 0)
		return (0);
	va_start(valist, n);

	/*iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);

	return (sum);
}
