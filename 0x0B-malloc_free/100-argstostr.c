#include "main.h"
#include <stdlib.h>
/**
 * *argstostr -  concatenates all the arguments
 *
 * @ac: argument one
 *
 * @av: argument two
 *
 * Return: pointer to a new string
 *
 */
char *argstostr(int ac, char **av)
{
	int a, b;

	int c = 0;

	int length = 0;

	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++;
	}
	length = length + ac;

	ptr = malloc(sizeof(char) * length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		if (ptr[c] == '\0')
		{
			ptr[c++] = '\n';
		}
	}
	return (ptr);
}
