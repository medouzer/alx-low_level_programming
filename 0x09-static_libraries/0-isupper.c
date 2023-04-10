#include "main.h"

/**
 * _isupper - check the carh is upper or not
 * @c: the char to test
 * Return: return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
