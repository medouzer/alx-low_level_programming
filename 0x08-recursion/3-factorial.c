#include "main.h"

/**
 * factorial - calculate the factorial of n
 * @n: is the number
 * Return: return the result of the function factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
