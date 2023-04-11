#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplies of two numbers
 * @argc: argument count
 * @argv: array of string
 * Return: return the value of argc
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
