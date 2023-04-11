#include <stdio.h>

/**
 * main - prints the number of arg passed into function
 * @argc: argument count
 * @argv: array of string
 * Return: return the value 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
