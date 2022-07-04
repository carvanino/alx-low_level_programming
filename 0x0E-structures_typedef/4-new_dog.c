#include "dog.h"
#include <stdlib.h>

/**
 * cpy - make a copy of an argument passed
 *
 * @src: Source to be copied from
 *
 * Return: pointer to copied argument
 */

char *cpy(char *src)
{
	char *ptr;
	int i;
	int len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len]; len++)
	{
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i]; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: Pointer to new dog; NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buskie;
	char *new_name;
	char *new_owner;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}

	buskie = malloc(sizeof(dog_t));
	if (buskie == NULL)
	{
		return (NULL);
	}
	new_name = cpy(name);
	if (new_name == NULL)
	{
		free(buskie);
		return (NULL);
	}
	(*buskie).name = new_name;
	(*buskie).age = age;

	new_owner = cpy(owner);
	if (new_owner == NULL)
	{
		free((*buskie).name);
		free(buskie);
		return (NULL);
	}
	(*buskie).owner = new_owner;
	return (buskie);
}
