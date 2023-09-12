#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog -  creates a new dog.
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: pointer
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, a;
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (n = 0; name[n] != '\0'; n++)
		;
	n++;
	(*d).name = malloc(sizeof(char) * n);
	if ((*d).name == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);
	}
	for (a = 0; a < n; a++)
		(*d).name[a] = name[a];
	(*d).age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	(*d).owner = malloc(sizeof(char) * o);
	if ((*d).owner == NULL)
	{
		free((*d).owner);
		free(d);
		return (NULL);
	}
	for (a = 0; a < o; a++)
		(*d).owner[a] = owner[a];
	return (d);
}

