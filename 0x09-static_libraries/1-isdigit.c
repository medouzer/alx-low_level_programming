#include "main.h"

/**
 * _isdigit - check if is digit or not
 * @c: the digit to check
 * Return: return 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
