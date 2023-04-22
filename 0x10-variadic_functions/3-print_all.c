#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all the char, int, float and string
 * @format: the format of the arg to print
 * @...: all the arg to print
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	char *separator = "";
	int i = 0;

	va_start(ap, format);
	while (format && format[i])
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
				str = va_arg(ap, char *);
				if (str)
				{
					printf("%s%s", separator, str);
					break;
				}
				printf(", (nil)");
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
