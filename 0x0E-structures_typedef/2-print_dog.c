#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints all member info of a struct dog
 * @d: a variable of type struct dog
 */

void print_dog(struct dog *d)
{

	if (d == NULL) /*validate if d initialized correctly*/
		return;

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");

	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
