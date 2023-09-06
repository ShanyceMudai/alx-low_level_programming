#include "main.h"
#include <stdlib.h>
/**
 * loose_grid - frees grid
 *
 * @grid: grid to be free'd
 *
 * @height: height of the grid
 *
 * no return
 *
 */
void loose_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * **strtow - splits a string into words.
 *
 * @str: string of words.
 *
 * Return: NULL if failure
 *
 */
char **strtow(char *str)
{
	unsigned int c, height, a, b, al;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	{
		ptr = malloc(sizeof(char *) * (height + 1));
	}
	if (ptr == NULL || height == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (a = al = 0; a < height; a++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ptr[a] = malloc((c - al + 2) * sizeof(char));
				if (ptr[a] == NULL)
				{
					loose_grid(ptr, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; al <= c; al++, b++)
			ptr[a][b] = str[al];
		ptr[a][b] = '\0';
	}
	ptr[a] = NULL;
	return (ptr);
}
