#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 *
 * @argc: count of parameters given to the program
 *
 * @argv: one dimensional array of strings
 *
 * Return: (0) to indicate success
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
