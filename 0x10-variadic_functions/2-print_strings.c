#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @separator: is the separator of strings
 * @n: the numbers of parameter passed into function
 * @...: is the parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
