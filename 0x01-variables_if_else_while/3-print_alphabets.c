#include <stdio.h>
/**
 * main - display the alphabets in lowercase and uppercase
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
