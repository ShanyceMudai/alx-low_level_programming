#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: count of arguments passed to a program
 *
 * @argv: array of pointers to a character
 *
 * Return: (0) for success of the program
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
