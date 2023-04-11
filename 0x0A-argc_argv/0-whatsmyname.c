#include <stdio.h>

/**
 * main - print the name of the file
 * @argc: argument count
 * @argv: array of string
 * Return: return the value of argc
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
