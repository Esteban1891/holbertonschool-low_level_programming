#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies a string
 * @src: pointer to source string
 * @dest: pointer to copy of src string
 *
 * Return: pointer to copy of src string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of s (without \0)
 */

unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * new_dog - creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lully;
	char *name_copy, *owner_copy;

	lully = malloc(sizeof(dog_t));
	if (lully == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * _strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(lully);
		return (NULL);
	}
	_strcpy(name_copy, name);

	owner_copy = malloc(sizeof(char) * _strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(lully);
		free(name_copy);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	lully->name = name_copy;
	lully->age = age;
	lully->owner = owner_copy;
	return (lully);
}
