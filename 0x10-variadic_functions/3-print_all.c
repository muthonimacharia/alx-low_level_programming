#include "variadic_functions.h"
/**
 * print_all - unction that prints anything
 * @format: type of data
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	putchar(10);
	va_end(ap);
}
