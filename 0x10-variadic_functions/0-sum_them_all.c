#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the parameters
 * @n: number of parameters passed on function
 * @...: variable number of parameters
 *
 * Return: if n == 0 - 0, else sum of calculation
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum = 0;

	va_list ap;


	if (n == 0)
		return (0);

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
