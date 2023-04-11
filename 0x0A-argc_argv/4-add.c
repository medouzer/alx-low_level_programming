#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - print the sum of numbers
 * @argc: argument count
 * @argv: array of string
 * Return: return the value of argc
 */

int main(int argc, char *argv[])
{
	int i, length;
	int j, sum = 0;
	char *str;

	if (argc == 1)
		printf("0\n");
	else
	{
		for ( i = 1; i < argc; i++)
		{
			str = argv[i];
			length = strlen(argv[i]);

			for (j = 0; j < length; ++j)
			{
				if (isdigit(str[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
