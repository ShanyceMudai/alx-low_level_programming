#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: count of arguments passed to the terminal
 *
 * @argv: one dimensional array of strings
 *
 * Return: (0) to indicate success of the program
 *
 */
int main(int argc, char *argv[])
{
	int coins;

	int number;

	number = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins >= 25)
			coins = coins - 25;
		else if (coins >= 10)
			coins -= 10;
		else if (coins >= 5)
			coins = coins - 5;
		else if (coins >= 2)
			coins = coins - 2;
		else if (coins >= 1)
			coins -= 1;
		number = number + 1;
	}
	printf("%d\n", number);
	return (0);
}
