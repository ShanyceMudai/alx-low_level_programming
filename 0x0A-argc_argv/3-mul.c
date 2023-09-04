#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers.
 *
 * @argc: count of parameters passed to a program
 *
 * @argv: one dimensional array of strings
 *
 * Return: one to indicate an error
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
