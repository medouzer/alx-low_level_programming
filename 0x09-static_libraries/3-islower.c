#include "main.h"

/**
 * _islower - return the result of alphabet
 * @c: is the singl lettre
 * Return: return the value 1 of the letter is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
