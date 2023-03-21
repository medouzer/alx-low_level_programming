#include "main.h"

/**
 * _isalpha - checks the alphabet character
 * @c: single letter
 * Return: return the value 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
