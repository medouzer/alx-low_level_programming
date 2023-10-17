#include "main.h"
/**
 * main - prints the keyword _putchar
 * Return: return the value 0
 */

int main(void)
{
	char keyword[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(keyword[i]);
	}
	_putchar('\n');
	return (0);
}
