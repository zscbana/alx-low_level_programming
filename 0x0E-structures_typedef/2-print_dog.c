#include <stdio.h>
#include "dog.h"

/**
 * print_dog - funcation that print dog strauct content
 * @d:the dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
