#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: char
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *ptrs;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptrs = va_arg(ap, char *);
		if (ptrs == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", ptrs);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
