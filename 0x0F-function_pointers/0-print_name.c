#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function print a name
 * @name: the name to print
 * @f: pointer to function
 * Return: return walo
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
