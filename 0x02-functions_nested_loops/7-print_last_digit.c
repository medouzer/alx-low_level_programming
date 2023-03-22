#include "main.h"

/**
 * print_last_digit - function to return the last digit
 * @n: the number to return his last digit
 * Return: to return the result
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		return (-last_digit);
	return (last_digit);
}
