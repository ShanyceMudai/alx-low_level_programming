#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 *
 * @argc: count of paramaters passd to the terminal
 *
 * @argv: array of pointers
 *
 * Return: 1 if one of the numbers is not a digit
 *
 */
int main(int argc, char **argv)
{
	int a;

	int b;

	int add;

	add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}

