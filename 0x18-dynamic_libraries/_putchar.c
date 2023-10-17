#include <unistd.h>

/**
 * _putchar - write a char
 * @c: is the char
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
