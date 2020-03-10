#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to dog struct
 * @d: pointer to dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
