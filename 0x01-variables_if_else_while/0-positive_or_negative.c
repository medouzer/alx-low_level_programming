#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - positive or negative
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else
		printf("%d is negative", n);
	return (0);
}
