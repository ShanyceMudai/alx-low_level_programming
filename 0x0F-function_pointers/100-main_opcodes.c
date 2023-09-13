#include <stdlib.h>
#include <stdio.h>
/**
 * displayOpcodes - print opcodes of a program
 *
 * @a: address of the main function
 *
 * @n: bytes to print
 *
 * Return: no return
 *
 */
void displayOpcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - print opcodes
 *
 * @argc: count of parameters passed to a program
 *
 * @argv: argument vector
 *
 * Return: an integer
 *
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	displayOpcodes((char *)&main, n);
	return (0);
}


