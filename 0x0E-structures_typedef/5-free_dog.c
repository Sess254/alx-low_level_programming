/*
 * File: 5-free_dog.c
 * Auth: Sess254
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog.
 * @d: Dogs to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
