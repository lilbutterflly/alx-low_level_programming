#include <stdio.h>
#include "dog.h"
/**
  * print_dog - Prints struct dog
  * @d: Pointer
  * Return: Void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing");
	}
	if ((d->name == NULL) && (d->age == 0) && (d->owner == NULL))
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
