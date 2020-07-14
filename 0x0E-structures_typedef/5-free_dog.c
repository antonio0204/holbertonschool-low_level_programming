#include "dog.h"
#include <stdlib.h>
/**
* free_dog - function that free dogs
* @d: the dog to sent free
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
