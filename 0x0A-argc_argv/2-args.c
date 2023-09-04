#include <stdio.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: count of arguments passed to a program
 *
 * @argv: one dimensional array of strings
 *
 * Return: (0) success of a program
 *
 */
int main(int argc, char *argv[])
{
	int x;

	x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
