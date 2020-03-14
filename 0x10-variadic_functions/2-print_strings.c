#include "variadic_functions.h"

/**
 * print_strings - entry point
 * @separator: entry string
 * @n: number arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i == (n - 1))
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
