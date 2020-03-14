#include "variadic_functions.h"

/**
 * sum_them_all -entry point
 * @n: number arguments
 * Return: total addition
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list mylist;

	va_start(mylist, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mylist, int);
	}

	va_end(mylist);

	return (sum);
}
