#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display last digit of the variable n
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;
	int _last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	_last_digit = n % 10;
	if (_last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, _last_digit);
	}
	else if (_last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, _last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, _last_digit);
	}
	return (0);
}
