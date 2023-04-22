#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all the char, int, float and char*
 * @format: the format of the arg to prints
 * @...: is all the arg to print
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *separator = "";

	va_list ap;

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
				if (*str == '\0')
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(ap);
}
