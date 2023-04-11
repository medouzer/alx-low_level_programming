#include <stdio.h>

/**
 * main - print all arg receives
 * @argc: argument count
 * @argv: array of string
 * Return: return the value of argc
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
