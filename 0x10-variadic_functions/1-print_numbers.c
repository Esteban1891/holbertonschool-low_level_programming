#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers
 * @n: Numbers of arguments
 * @separator: get character colon
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;

	va_list list;

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, int));

		if (count == (n - 1))
		{
			break;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
