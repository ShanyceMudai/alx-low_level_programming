#include <stdio.h>
/**
 * main - display _putchar
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int a;
	char c[] = "_putchar";

	for (a = 0; a <= 7; a++)
	{
		putchar(c[a]);
	}
	putchar('\n');
	return (0);
}
