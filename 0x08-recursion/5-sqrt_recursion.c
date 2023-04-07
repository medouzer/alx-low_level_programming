#include "main.h"

int _sqrt_origin(int n, int a);

/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * Return: return the result of the function
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_origin(n, 0));
	}
}

/**
 * _sqrt_origin - the function to calculate sqrt of number
 * @a: number of the loop
 * @n: is number from _sqrt_recursion
 * Return: return the sqrt of the number n
 */
int _sqrt_origin(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (_sqrt_origin(n, a + 1));
	}
}
