#include "main.h"

int test_prime(int n, int m);

/**
 * is_prime_number - test number n if prime or not
 * @n: the number to test
 * Return: return 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (test_prime(n, n - 1));
	}
}

/**
 * test_prime - test number n if prime or not
 * @n: the number to test
 * @a: number of loops
 * Return: return 1 or 0
 */

int test_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	else if (a > 0 && n % a == 0)
	{
		return (0);
	}
	else
	{
		return (test_prime(n, a - 1));
	}
}
